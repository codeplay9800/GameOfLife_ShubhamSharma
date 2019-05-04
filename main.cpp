#include <iostream>
#include <cstdlib>
#include <unistd.h>
#include <fstream>
#include <string>
#include <sstream>
#include "Cell.h"
#include "MainMenu.h"

using namespace std;

int main(){

    system( "color B" );
    MainMenu men;
    int num_cell;
    cin >> num_cell;
    Cell cellgrid(num_cell);
    cellgrid.init();
    cellgrid.update();
    return 0;
    getchar();
}
