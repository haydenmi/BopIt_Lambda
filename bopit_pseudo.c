//ECE 1895 Spring 2021 Group Lambda
//Bop-It! Pseudocode
//Note: Not necessarily will be coding in C

/*

  Speaker ask user to press “new game” button to start a new game;
  
  If (“new game” button pressed)
		Game _running = 1;
	Else
    Game_running = 0;


  while(game_running)
  {

    Set score to 0;
	  Speaker signifies game start;

	  For (int i=0; i<99; i++) //this means 99 rounds
	  {
    
		  Device chooses randomly between choose_it, flip_it, or squeeze_it;
		  Speaker signifies if choose_it, flip_it, or squeeze_it;
		  Start counting down from 2 seconds;  //this is the time limit
      
		  If (choose_it)
		  {
			    Rand = Generate a random number between 1 and 3;
			    If (Rand = 1)
				    User needs to press buttons 1 and 2;
			    If (Rand = 2)
				    User needs to press buttons 2 and 3;
			    If (Rand = 3)
				    User needs to press buttons 1 and 3;
		  }
      
		  If (flip_it)
		  {
			  Initial = Measure accelerometer;
			  While (1)
			  {
				  New = Measure accelerometer; //constantly measure accelerometer
				  If (New = Initial * -1) //if opposite 
					  Break;
			  }
		  }
      
		  If (squeeze_it)
		  {
			  While (1)
			  {
				  Pressure_reading = read pressure sensor pin;   //constantly measure
				  If (Pressure_reading > 500)   //minimum pressure required for task
					   Break;
			  }
		  }
      
		  If (correct action completed)
        Score = Score + 1;
      If (incorrect action completed OR time runs out)
	      Break out of the for loop to end the game;
        
    } //end of for loop, end of game
	    
	  Display Score on LED 7 segment display;
	  Speaker signify game end;
	  Speaker ask user to press “new game” button to start a new game;
    If (“new game” button pressed)
		  Game _running = 1;
	  Else
      Game_running = 0;
} //end while-loop

//Game will begin again if game_running = 1, will stop if game_running = 0
// Should we keep device checking for "new game" input for a while?
// How long? Do we automatically have it shut off after that certain amount of 
//   time?


*/
