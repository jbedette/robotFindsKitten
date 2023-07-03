#include <iostream>
#include <fstream>
#include <vector>
#include <math.h>
using namespace std;
class Board{
    public:
        Board();
        Board(int,int,int);
        void disp();
        int genItems(int);
        int genRobot();
        int x;
        int y;
        vector<vector<char> > map;
        vector<char> items;


};