#include "Cell.h"
#include <iostream>
#include <vector>

const int gridSize = 25;

bool m_cells[gridSize+1][gridSize+1];

Cell::Cell(int cell)
{
    this->num_cell=cell;
    bool m_cells[gridSize+1][gridSize+1] = {};
}

Cell::~Cell()
{

}

void Cell::init()
{
    int x,y;
    for(int i=0;i<num_cell;i++)
	  {
        clearScreen();
        printGrid();
	    std::cout << "Enter the coordinates of cell " << i+1 << " : ";
	    std::cin >> x >> y;
	    m_cells[x+1][y+1] = true;
	  }
}

void Cell::printGrid()
{
    for(int a = 1; a < gridSize; a++)
        {
        for(int b = 1; b < gridSize; b++)
        {
            if(m_cells[a][b] == true)
            {
                std::cout << " X ";
            }
            else
            {
                std::cout << " - ";
            }
            if(b == gridSize-1)
            {
                std::cout << std::endl;
            }
        }
    }
}
void Cell:: clearScreen(void) {
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

void Cell::update()
{
    bool m_cells2[gridSize+1][gridSize+1] = {};
    for(int a =0; a < gridSize; a++)
    {
        for(int b = 0; b < gridSize; b++)
        {
                m_cells2[a][b] = m_cells[a][b];
        }
    }

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
                        if(m_cells2[a+c][b+d])
				{
					++alive;
				}
                    }
                }
            }
            if(alive < 2)
            {
                m_cells[a][b] = false;
            }
            else if(alive == 3)
            {
                m_cells[a][b] = true;
            }
            else if(alive > 3)
            {
                m_cells[a][b] = false;
            }
        }
    }
    clearScreen();
    printGrid();
}
