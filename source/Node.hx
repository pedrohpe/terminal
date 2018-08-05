package;

import flixel.group.FlxSpriteGroup;
import flixel.FlxSprite;

enum NodeType 
{
    STATION;
    FILL;
}

class Node extends FlxSpriteGroup{
    private var icon:FlxSprite;
    public var type:NodeType;
    public var xAxis:Int;
    public var yAxis:Int;
    public var parent:Int;
    public var connections:Array<Int>;

    public function new(xAxis_:Int, yAxis_:Int, type_:NodeType, ?parent_:Int){
        super();

        xAxis = xAxis_;
        yAxis = yAxis_;
        type = type_;
        connections = new Array<Int>();

        switch (type){
            case STATION:
                this.icon = new FlxSprite(xAxis*32, yAxis*32);
                icon.loadGraphic("assets/images/station_node.png");
                add(icon);
            case FILL:
                this.icon = new FlxSprite(xAxis*32+4, yAxis*32+4);
                icon.loadGraphic("assets/images/fill_node.png");
                add(icon);

        }
        parent = parent_;

        for (i in 0...7){
            connections.insert(i, i);
        }
        connections.remove(parent);
    }

    public function removeDirection(dir:Int){
        connections.remove(dir);
    }

    public function addDirection(dir:Int){
        connections.insert(dir, dir);
    }
}