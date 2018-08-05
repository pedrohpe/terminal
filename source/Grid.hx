package;

import flixel.group.FlxSpriteGroup;
import Node.NodeType;
import Random;

enum InitialPathwayType{
    OneRandomTwoStraight;
    TwoStraightOneRandom;
}

class Grid extends FlxSpriteGroup{
    public var gridPoints:Array<Array<Node>>;
    private var heightGrid:Int;
    private var widthGrid:Int;

    public function new(heightGrid_:Int, widthGrid_:Int){
        super();

        heightGrid = heightGrid_;
        widthGrid = widthGrid_;

        gridPoints = new Array<Array<Node>>();

        for (i in 0...widthGrid){
            gridPoints[i] = new Array<Node>();
            for (j in 0...heightGrid){
                gridPoints[i][j] = null;
            }
        }
    }

    // if the node to be added does not exist, create it
    // if it exists but is a fill, return flagcreation as false but remove the direction
    // if it exists but is a station, return null
    public function addNode(xAxis:Int, yAxis:Int, type:NodeType, ?directionParent:Int){
        var flagCreation:Bool = false;
        var nodeReturn:Node = null;

        if (gridPoints[xAxis][yAxis] == null){
            gridPoints[xAxis][yAxis] = new Node(xAxis, yAxis, type, directionParent);
            add(gridPoints[xAxis][yAxis]);
            flagCreation = true;
            nodeReturn = gridPoints[xAxis][yAxis];
        } else if (gridPoints[xAxis][yAxis].type == NodeType.FILL){
            gridPoints[xAxis][yAxis].removeDirection(directionParent);
            nodeReturn = gridPoints[xAxis][yAxis];
        }

        var addNodeReturnStructure = {node: nodeReturn, creation: flagCreation}
        return addNodeReturnStructure;
    }

    public function removeNode(node:Node){
        remove(gridPoints[node.xAxis][node.yAxis], true);
    }

    public function generateNewStation(xAxis:Int, yAxis:Int){
        var newStation:Node = null;

        if (gridPoints[xAxis][yAxis] != null){
            var currNode = gridPoints[xAxis][yAxis];

            //if 1, build path 1 way, else if 2 build it another
            var index:Int = Random.int(0,1);
            var initialPathway = Type.createEnumIndex(InitialPathwayType, index);
            switch initialPathway{
                case OneRandomTwoStraight:
                    while (newStation == null){
                        newStation = oneRandomTwoStraightBuild(currNode);
                    }
                    return newStation;
                case TwoStraightOneRandom:
                    while (newStation == null){
                        newStation = twoStraightOneRandomBuild(currNode);
                    }
                    return newStation;
            }
            return null;
        }
        return null;
    }
    
    // offsets = to find x and y positions of new node relative to current node
    private function oneRandomTwoStraightBuild(currNode:Node){

        var direction1:Int = Random.fromArray(currNode.connections);

        var offsets = calculateOffsets(direction1);

        // directionParent = direction to be removed from new node available connections
        var directionParent = (direction1 + 4) % 8;
        var newPosX = currNode.xAxis + offsets[0];
        var newPosY = currNode.yAxis + offsets[1];

        var newNode1 = addNode(newPosX, newPosY, NodeType.FILL, directionParent);

        if (newNode1.node == null){
            return null;
        }
        // remove neighbors of parent direction
        newNode1.node.removeDirection((direction1 + 3) % 8);
        newNode1.node.removeDirection((direction1 + 5) % 8);

        var direction2:Int = Random.fromArray(newNode1.node.connections);
        // add neighbors of parent direction again
        newNode1.node.addDirection((direction1 + 3) % 8);
        newNode1.node.addDirection((direction1 + 5) % 8);
        
        var offsets = calculateOffsets(direction2);

        var directionParent = (direction2 + 4) % 8;
        var newPosX = newNode1.node.xAxis + offsets[0];
        var newPosY = newNode1.node.yAxis + offsets[1];
        var newNode2 = addNode(newPosX, newPosY, NodeType.FILL, directionParent);
        if (newNode2.node == null){
            if (newNode1.creation){
                removeNode(newNode1.node);
            }
            return null;
        }

        var newPosX = newNode2.node.xAxis + offsets[0];
        var newPosY = newNode2.node.yAxis + offsets[1];

        var newStation = addNode(newPosX, newPosY, NodeType.STATION, directionParent);
        if (newStation.node == null || newStation.node.type == NodeType.FILL){
            if (newNode1.creation){
                removeNode(newNode1.node);
            }
            if (newNode2.creation){
                removeNode(newNode2.node);
            }
            return null;
        }
        if(!checkProximityStation(newStation.node)){
            if (newNode1.creation){
                removeNode(newNode1.node);
            }
            if (newNode2.creation){
                removeNode(newNode2.node);
            }
            removeNode(newStation.node);
            return null;
        }

        return newStation.node;
    }

    private function twoStraightOneRandomBuild(currNode:Node){
        var direction1:Int = Random.fromArray(currNode.connections);

        var offsets = calculateOffsets(direction1);

        var directionParent = (direction1 + 4) % 8;
        var newPosX = currNode.xAxis + offsets[0];
        var newPosY = currNode.yAxis + offsets[1];

        var newNode1 = addNode(newPosX, newPosY, NodeType.FILL, directionParent);
        if (newNode1 == null){
            return null;
        }

        var newPosX = newNode1.node.xAxis + offsets[0];
        var newPosY = newNode1.node.yAxis + offsets[1];

        var newNode2 = addNode(newPosX, newPosY, NodeType.FILL, directionParent);
        if (newNode2.node == null){
            if(newNode1.creation){
                removeNode(newNode1.node);
            }
            return null;
        }

        // remove neighbors of parent direction
        newNode2.node.removeDirection((direction1 + 3) % 8);
        newNode2.node.removeDirection((direction1 + 5) % 8);
        var direction2:Int = Random.fromArray(newNode2.node.connections);
        // add neighbors of parent direction again
        newNode2.node.addDirection((direction1 + 3) % 8);
        newNode2.node.addDirection((direction1 + 5) % 8);

        var offsets = calculateOffsets(direction2);

        var directionParent = (direction2 + 4) % 8;
        var newPosX = newNode2.node.xAxis + offsets[0];
        var newPosY = newNode2.node.yAxis + offsets[1];

        var newStation = addNode(newPosX, newPosY, NodeType.STATION, directionParent);
        if (newStation.node == null || newStation.node.type == NodeType.FILL){
            if (newNode1.creation){
                removeNode(newNode1.node);
            }
            if (newNode2.creation){
                removeNode(newNode2.node);
            }
            return null;
        }
        if(!checkProximityStation(newStation.node)){
            if (newNode1.creation){
                removeNode(newNode1.node);
            }
            if (newNode2.creation){
                removeNode(newNode2.node);
            }
            removeNode(newStation.node);
            return null;
        }
        return newStation.node;
    }

    private function calculateOffsets(direction:Int){
        var offset = new haxe.ds.Vector(2);
        switch direction{
            case 0:
                //N
                offset[0] = 0;
                offset[1] = -1;
            case 1:
                //NE
                offset[0] = 1;
                offset[1] = -1;
            case 2:
                //E
                offset[0] = 1;
                offset[1] = 0;
            case 3:
                //SE
                offset[0] = 1;
                offset[1] = 1;
            case 4:
                //S
                offset[0] = 0;
                offset[1] = 1;
            case 5:
                //SW
                offset[0] = -1;
                offset[1] = 1;
            case 6:
                //W
                offset[0] = -1;
                offset[1] = 0;
            case 7:
                //NW
                offset[0] = -1;
                offset[1] = -1;
        }
        return offset;
    }

    public function checkProximityStation(station:Node){
        if(station == null){
            trace('null');
            return false;
        }

        var xAxis = station.xAxis;
        var yAxis = station.yAxis;
        trace(xAxis);
        trace(yAxis);
        var offset;
        var offsetYAxis:Int;
        var offsetXAxis:Int;

        for(i in 0...8){
            offset = calculateOffsets(i);
            offsetXAxis = offset[0];
            offsetYAxis = offset[1];
            trace('checking x at ' + (xAxis+offsetXAxis) + ' and y at ' + (yAxis+offsetYAxis));
            if(gridPoints[xAxis+offsetXAxis][yAxis+offsetYAxis] != null){
                if(gridPoints[xAxis+offsetXAxis][yAxis+offsetYAxis].type == NodeType.STATION){
                    trace('Station found at x=' + (xAxis+offsetXAxis) + 'and y=' + (yAxis+offsetYAxis));
                    return false;
                }
            }
        }
        return true;
    }
}