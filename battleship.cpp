#include <iostream>
#include <iomanip>
#include <cstdlib>

using namespace std;

int main
(
	int row 10;
	int col 10;
	int compBoard[row][col];
	int playerBoard[row][col];
	
	enum state
	{
		EMPTY = 0,SHIP,HIT,MISS
	}
	
	
	
	void makeBoard(int n[row][col])
	{
		for(int row = 0; row < 10; ++row )
		{
			for(int col = 0; col < 10; ++col)
				{
					n[row][col] = 0;
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
				cout << "Debug ship place switch" << endl; 
			}
		}
	}
)
