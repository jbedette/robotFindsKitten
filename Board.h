#include <iostream>
#include <vector>
#include <math.h>
#include "Robot.h"
using namespace std;
class Board{
    public:
        Board();
        Board(int,int,int);
        void disp();
        int genItems(int);
        int genRobot();
        int moveRobot(char);
        int x;
        int y;
        vector<vector<char> > map;
        vector<char> items;
        Robot robot;


};