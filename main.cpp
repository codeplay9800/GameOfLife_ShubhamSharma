#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <fstream>
#include <string>
#include <sstream>
#include "Cell.h"
#include "MainMenu.h"
using namespace std;

const int gridSize = 25;
void printGrid(bool gridOne[gridSize+1][gridSize+1]);
void determineState(bool gridOne[gridSize+1][gridSize+1]);
void clearScreen(void);

int main(){

    system( "color A" );
    int nc;
    cin >> nc;
    MainMenu men;
    men.Display();
    Cell cellgrid(nc);
    cellgrid.init();
    cellgrid.update();
/*
	for(int i=0;i<stoi(nc);i++)
	  {
	    cout <<stoi(nc)<< "Enter the coordinates of cell " << i+1 << " : ";
	    cin >> x >> y;
	    gridOne[x][y] = true;
	    printGrid(gridOne);
	  }
      //}
    cout << "Grid setup is done. Start the game ? (y/n)" << endl;
    printGrid(gridOne);
    cin >> start;
    if( start == "y" || start == "Y" )
      {
        while (true)
	  {
            printGrid(gridOne);
            determineState(gridOne);
            usleep(200000);
            clearScreen();
	  }
      }
    else
      {
        return 0;
      }
}

void clearScreen(void) {
    // Tested and working on Ubuntu and Cygwin
    #if defined(_WIN32) || defined(WIN32) || defined(__MINGW32__) || defined(__BORLANDC__)
        #define OS_WIN
    #endif

    #ifdef OS_WIN
        system("CLS");
    #endif

    #if defined(linux) || defined(__CYGWIN__)
        system("clear");
    #endif
}

void printGrid(bool gridOne[gridSize+1][gridSize+1]){
    for(int a = 1; a < gridSize; a++)
        {
        for(int b = 1; b < gridSize; b++)
        {
            if(gridOne[a][b] == true)
            {
                cout << " O ";
            }
            else
            {
                cout << " . ";
            }
            if(b == gridSize-1)
            {
                cout << endl;
            }
        }
    }
}

void compareGrid (bool gridOne[gridSize+1][gridSize+1], bool gridTwo[gridSize+1][gridSize+1]){
    for(int a =0; a < gridSize; a++)
    {
        for(int b = 0; b < gridSize; b++)
        {
                gridTwo[a][b] = gridOne[a][b];
        }
    }
}

void determineState(bool gridOne[gridSize+1][gridSize+1]){
    bool gridTwo[gridSize+1][gridSize+1] = {};
    compareGrid(gridOne, gridTwo);

    for(int a = 1; a < gridSize; a++)
    {
        for(int b = 1; b < gridSize; b++)
        {
            int alive = 0;
            for(int c = -1; c < 2; c++)
            {
                for(int d = -1; d < 2; d++)
                {
                    if(!(c == 0 && d == 0))
                    {
                        if(gridTwo[a+c][b+d])
				{
					++alive;
				}
                    }
                }
            }
            if(alive < 2)
            {
                gridOne[a][b] = false;
            }
            else if(alive == 3)
            {
                gridOne[a][b] = true;
            }
            else if(alive > 3)
            {
                gridOne[a][b] = false;
            }
        }
    }*/
    return 0;
    getchar();
}
