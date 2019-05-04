#pragma once

#include <vector>

class Cell
{
    private:
        std::vector<Cell> *m_cells;
/*    enum Life
    {
        On,
        Off
    };
*/
    public:
        bool alive;
        Cell(int cell);
        int num_cell;
        void update();


};
