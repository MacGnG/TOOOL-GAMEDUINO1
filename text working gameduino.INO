#include <SPI.h>
#include <GD.h>



	static const char *toool[13] = {
		"                                                   ",   // 0
		"       THE OPEN ORGANISATION OF LOCKPICKERS        ",   // 1
		"  ________                                         ",   // 2
		" [     ___]           ,=====.               _      ",   // 3
		" [__  ]    ,=====.   /   _   \\   ,=====.   [ ]     ",   // 4
		"    [ ]   /   _   \\ |   ( )   | /   _   \\  [ ]     ",   // 5
		"    [ ]  |   ( )   ||   /_\\   ||   ( )   | [  \\    ",   // 6
		"    [ ]  |   /_\\   | \\       / |   /_\\   | [  ]    ",   // 7
		"    [ ]   \\       /   \'=====\'   \\       /  [  ]    ",   // 8
		"    [ ]    \'=====\'               \'=====\'   [  ]__  ",   // 9
		"    [_]                                    [_____] ",   //10
		"   HTTPS://TOOOL.US     HTTPS://DISCORD.GG/TOOOL   ",   //11
		"            HTTPS://TOOOL.US/MEETINGS/             "    //12
	};

  int thedelay = 1000;
  int maxR = 36;
  int headerandfooter = 4;
  int graphix = 9;
  int thespace = (maxR - headerandfooter);	//36 - 4 = 32
  int boounce = (thespace - (1 + graphix)); // 32 - (1+9) = 22




static void downdown()
{

	for (int x = boounce; x > headerandfooter; x--){

		for (int a = 2; a <= thespace; a++){	// clear screen
			GD.putstr(0, a, toool[0]);			// with blanks
		};

		//header
		GD.putstr(0, 1, toool[1]);
		GD.putstr(0, 3, toool[11]);
		GD.putstr(0, 34, toool[1]);
		GD.putstr(0, 36, toool[12]);
		//footer

		//graphic
		GD.putstr(0, (x +  2), toool[2]);
		GD.putstr(0, (x +  3), toool[3]);
		GD.putstr(0, (x +  4), toool[4]);
		GD.putstr(0, (x +  5), toool[5]);
		GD.putstr(0, (x +  6), toool[6]);
		GD.putstr(0, (x +  7), toool[7]);
		GD.putstr(0, (x +  8), toool[8]);
		GD.putstr(0, (x +  9), toool[9]);
		GD.putstr(0, (x + 10), toool[10]);
		delay(thedelay); 
		//graphic

	};


}

static void upup()
{

	for (int x = headerandfooter; x < boounce; x++){

		for (int a = 2; a <= thespace; a++){	// clear screen
			GD.putstr(0, a, toool[0]);			// with blanks
		};

		//header
		GD.putstr(0, 1, toool[1]);
		GD.putstr(0, 3, toool[11]);
		GD.putstr(0, 34, toool[1]);
		GD.putstr(0, 36, toool[12]);
		//footer

		//graphic
		GD.putstr(0, (x +  2), toool[2]);
		GD.putstr(0, (x +  3), toool[3]);
		GD.putstr(0, (x +  4), toool[4]);
		GD.putstr(0, (x +  5), toool[5]);
		GD.putstr(0, (x +  6), toool[6]);
		GD.putstr(0, (x +  7), toool[7]);
		GD.putstr(0, (x +  8), toool[8]);
		GD.putstr(0, (x +  9), toool[9]);
		GD.putstr(0, (x + 10), toool[10]);
		delay(thedelay); 
		//graphic

	};

}


void setup()
{
	GD.begin();
	GD.ascii();

	Serial.begin(1000000);
	long started = millis();
}

void loop()
{

	upup();
	downdown();
}
