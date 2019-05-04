#include<iostream>
#include"MainMenu.h"
#include <string>

using namespace std;

MainMenu::MainMenu()
{
    string start;
    string filename;
    cout << "                         THE GAME OF life - Implementation in C++" << endl;
    cout << endl;
    cout << endl;
    cout << endl;
    cout << "Also known simply as life, " << endl;
    cout << "is a cellular automaton devised by the British mathematician John Horton Conway in 1970." << endl;
    cout << endl;
    cout << "Rules" << endl;
    cout << "The universe of the Game of life is an infinite two-dimensional orthogonal grid of square cells," << endl;
    cout << "each of which is in one of two possible states, life or dead. Every" << endl;
    cout << "cell interacts with its eight neighbours, which are the cells that are horizontally, vertically, or diagonally adjacent." << endl;
    cout << "At each step in time, the following transitions occur:" << endl;
    cout << "1. Any live cell with fewer than two live neighbours dies, as if caused by under-population." << endl;
    cout << "2. Any live cell with two or three live neighbours lives on to the next generation." << endl;
    cout << "3. Any live cell with more than three live neighbours dies, as if by over-population." << endl;
    cout << "4. Any dead cell with exactly three live neighbours becomes a live cell, as if by reproduction." << endl;
    cout << endl;
    cout << "X - living cell" << endl;
    cout << "- - dead cell" << endl;
    cout << endl;
    cout << "Enter the number of Alive cells ";
    cout << endl;
}

MainMenu::~MainMenu()
{

}
