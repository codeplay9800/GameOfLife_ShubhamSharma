#include "Cell.h"
#include <iostream>

const int gridSize = 25;

Cell::Cell(int cell)
{
    *m_cells = new Cell(cell)
    this->num_cell=cell;
    for(int i=0;i<gridSize;i++)
    {
        for(int j=0;j<gridSize;j++)
        {
            m_cells[i][j]->alive = false;
        }
    }
}

void Cell::init()
{
    int input_count = cell;
    int x,y;
    cin>>x>>y;
    for(int i=0;i<num_cell;i++)
	  {
	    cout << "Enter the coordinates of cell " << i+1 << " : ";
	    cin >> x >> y;
	    m_cells[x][y]->alive = true;
	    gridOne[x][y] = true;
	    printGrid(gridOne);
	  }
}

void Cell::printGrid()
{
    for(int a = 1; a < gridSize; a++)
        {
        for(int b = 1; b < gridSize; b++)
        {
            if(m_cells[a][b]->alive == true)
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

void Cell::update()
{
}
