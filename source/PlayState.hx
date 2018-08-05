package;

import flixel.FlxG;
import flixel.FlxState;
import flixel.FlxSprite;
import flixel.addons.display.FlxGridOverlay;

class PlayState extends FlxState
{
	public var Grids:List<Grid>;
	public static inline var GRID_SIZE = 200;

	override public function create():Void
	{
		super.create();
		var background = new FlxSprite(0,0);
		background.loadGraphic("assets/images/background.png");
		background = FlxGridOverlay.overlay(background, 32, 32, 680, 
		360, true, 0x88e7e6e6, 0x88d9d5d5);
		add(background);

		Grids = new List<Grid>();
		var GridInit = new Grid(GRID_SIZE, GRID_SIZE);
		Grids.add(GridInit);

		trace('beginning at 7,7');
		GridInit.addNode(7, 7, STATION);
		var newStation:Node = GridInit.generateNewStation(7, 7);
		trace('new station added: ' + newStation.xAxis + ', ' + newStation.yAxis);
		newStation = GridInit.generateNewStation(newStation.xAxis, newStation.yAxis);
		trace('new station added: ' + newStation.xAxis + ', ' + newStation.yAxis);
		newStation = GridInit.generateNewStation(newStation.xAxis, newStation.yAxis);
		trace('new station added: ' + newStation.xAxis + ', ' + newStation.yAxis);

		add(GridInit);
				
	}

	public function resetGame(){
		var reset:Bool;

		reset = FlxG.keys.anyPressed([SPACE]);
	}

	override public function update(elapsed:Float):Void
	{
		resetGame();
		super.update(elapsed);
	}
}
