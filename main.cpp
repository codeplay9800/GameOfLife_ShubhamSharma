#include <iostream>
#include <string>
#include "Cell.h"
#include "MainMenu.h"


int main(){

    system( "color B" );
    MainMenu men;
    int num_cell;
    std::cin >> num_cell;
    Cell cellgrid(num_cell);
    cellgrid.init();
    std::cin.ignore();
    std::cin.get();
    cellgrid.update();
    std::cin.ignore();
    std::cin.get();
    return 0;
}
