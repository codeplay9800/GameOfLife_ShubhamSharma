#pragma once

#include <vector>

class Cell
{
    public:
        ~Cell();
        Cell(int cell);
        int num_cell;
        void update();
        void init();
        void printGrid();
        void clearScreen();

};
