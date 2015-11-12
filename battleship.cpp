#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main()
{
	int row = 10;
	int col = 10;
	int compBoard[row][col];
	int playerBoard[row][col];
	
	enum state{EMPTY,SHIP,HIT,MISS}

	
	
	
	void makePlayerBoard(int playerBoard[row][col])
	{
		for(int row = 0; row < 10; ++row )
		{
			for(int col = 0; col < 10; ++col)
				{
					playerBoard[row][col] = 0;
				}
			
		}
			
	}
	/*
	void makeCompBoard(int compBoard[row][col])
	{
		for(int row = 0; row < 10; ++row )
		{
			for(int col = 0; col < 10; ++col)
				{
					compBoard[row][col] = 0;
				}
			
		}
			
	}
	
	
	void placeCompShip(int compBoard[row][col])
	{
		counter = 5; //number of ships
		while (counter > 0)
		{
		
			int xcoord = (srand % 10);
			int ycoord = (srand % 10);
			int shipDirectionRand = (srand % 2); //return 0 or 1 
			int shipDirection = 2;
			int shipLength = 6;
				if(shipDirectionRand == 0)
				{
					shipDirection = 0; //horizontal 
				} 
				if (shipDirectionRand == 1)
				{
					shipDirectoin = 1; //vertical
				}
			switch(counter)
			{
				
			case 5 ://check for 5 spaces to validate carrier
				shipLength = 5; 
				bool validated = validateCompShip(shipLength,shipDirection,xcoord,ycoord)
				if (validated == true)
				{
					setCompShip(shipLength,shipDirection,xcoord,ycoord); //had to break setShip and validateShip into 2 seperate functions for player and comp
					--counter;
				}
				//if validated returns false, rerun the while loop to place ship
				break ;
			
			case 4 ://check for 4 spaces to validate battleship
				shipLength = 4; 
				bool validated = validateCompShip(shipLength,shipDirection,xcoord,ycoord)
				if (validated == true)
				{
					setCompShip(shipLength,shipDirection,xcoord,ycoord)
					--counter;
				}
				//if validated returns false, rerun the while loop to place ship
				break;
			case 3 ://check for 3 spaces to validate destroyer
				shipLength = 3; 
				bool validated = validateCompShip(shipLength,shipDirection,xcoord,ycoord)
				if (validated == true)
				{
					setCompShip(shipLength,shipDirection,xcoord,ycoord) 
					--counter;
				}
				//if validated returns false, rerun the while loop to place ship
				break;
			case 2 ://check for 3 spaces to validate submarine
				shipLength = 3; 
				bool validated = validateCompShip(shipLength,shipDirection,xcoord,ycoord)
				if (validated == true)
				{
					setCompShip(shipLength,shipDirection,xcoord,ycoord) 
					--counter;
				}
				//if validated returns false, rerun the while loop to place ship
				break;
			case 1 ://check for 2 spaces to validate patrol boat
				shipLength = 2; 
				bool validated = validateCompShip(shipLength,shipDirection,xcoord,ycoord)
				if (validated == true)
				{
					setCompShip(shipLength,shipDirection,xcoord,ycoord) 
					--counter;
				}
				//if validated returns false, rerun the while loop to place ship
				break;
			default: 
				cout << "Debug ship comp place switch" << endl; 
			}
		}
	}*/
	void placePlayership(int playerBoard[row][col])
	{
		int counter = 5;
		while (counter > 0)
		{
			int xcoord = 0;
			int ycoord = 0;
			int shipDirection = 0;
			int shipLength = 0;
			String shipName = "";
			switch counter:
			{
				case 5 :
				{
				shipName = "Aircraft carrier";
				break;
				}
				case 4 :
				{
				shipName = "Battleship";
				break;
				}
				case 5 :
				{
				shipName = "Destroyer";
				break;
				}
				case 5 :
				{
				shipName = "Submarine";
				break;
				}
				case 5 :
				{
				shipName = "Patrol Boat";
				break;
				}
			}
			cout << "Which x coordinate would you like to place your " << shipName << " at?" << endl;
			cin >> xcoord;
			cout << "Which y coordinate would you like to place your " << shipName << " at?" << endl;
			cin >> ycoord;
			cout << "Would you like to place your ship: \n[Horizontally (press 0)] \n[Vertically (press 1)]\n" << endl;
			cin >> shipDirection;
			ase 5 ://check for 5 spaces to validate carrier
				shipLength = 5; 
				bool validated = validatePlayerShip(shipLength,shipDirection,xcoord,ycoord)
				if (validated == true)
				{
					setPlayerShip(shipLength,shipDirection,xcoord,ycoord); 
					--counter;
				}
				break ;
			
			case 4 ://check for 4 spaces to validate battleship
				shipLength = 4; 
				bool validated = validatePlayerShip(shipLength,shipDirection,xcoord,ycoord)
				if (validated == true)
				{
					setPlayerShip(shipLength,shipDirection,xcoord,ycoord)
					--counter;
				}
				break;
			case 3 ://check for 3 spaces to validate destroyer
				shipLength = 3; 
				bool validated = validatePlayerShip(shipLength,shipDirection,xcoord,ycoord)
				if (validated == true)
				{
					setPlayerShip(shipLength,shipDirection,xcoord,ycoord) 
					--counter;
				}
				break;
			case 2 ://check for 3 spaces to validate submarine
				shipLength = 3; 
				bool validated = validatePlayerShip(shipLength,shipDirection,xcoord,ycoord)
				if (validated == true)
				{
					setPlayerShip(shipLength,shipDirection,xcoord,ycoord) 
					--counter;
				}
				break;
			case 1 ://check for 2 spaces to validate patrol boat
				shipLength = 2; 
				bool validated = validatePlayerShip(shipLength,shipDirection,xcoord,ycoord)
				if (validated == true)
				{
					setPlayerShip(shipLength,shipDirection,xcoord,ycoord) 
					--counter;
				}
				break;
			default: 
				cout << "Debug player ship place switch" << endl; 
			}
			
			
			 
		}

	}
	/*
	void setCompShip(int shipLength,int shipDirection, int xcoord, int ycoord)
	{		
		int shipLength = shipLength;
		int shipDirection = shipDirection;
		int xcoord = xcoord;
		int ycoord = ycoord;

			if (shipDirection == 0) //horizontal
			{
				for loop (i = xcoord; i < (ycoord+shipLength);i++)
				{
					compBoard[i][y] = 1; //makes each item in row of ship length into a SHIP
				}
			}	
			if (shipDirection == 1) //vertical
			{
				for loop (i = ycoord; i < (ycoord+shipLength);i++)
				{
					compBoard[x][i] = 1; //makes each item in column of ship length into a SHIP
				}
			}
	}*/
	
	void setPlayerShip(int shipLength,int shipDirection, int xcoord, int ycoord)
	{		
			if (shipDirection == 0) //horizontal
			{
				for loop (i = xcoord; i < (ycoord+shipLength);i++)
				{
					playerBoard[i][y] = 1; //makes each item in row of ship length into a SHIP
				}
			}	
			if (shipDirection == 1) //vertical
			{
				for loop (i = ycoord; i < (ycoord+shipLength);i++)
				{
					playerBoard[x][i] = 1; //makes each item in column of ship length into a SHIP
				}
			}
	}
/*
	bool validatePlayerShip(int shipLength, int shipDirection, int xcoord, int ycoord)
	{
		for(int i=0;i < shipLength; ++i)
		{
			if (shipDirection == 0)//horizontal
			{
				board
			}	
		} 
	}		

*/

}
