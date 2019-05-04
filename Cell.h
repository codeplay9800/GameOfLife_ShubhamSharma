#pragma once

#include <vector>

class Cell
{
/*    enum Life
    {
        On,
        Off
    };
*/
    public:
        Cell(int cell);
        int num_cell;
        void update();
        void init();
        void printGrid();
        void clearScreen();

};
