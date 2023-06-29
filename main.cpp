#include <iostream>
#include <vector>
#include "Board.h"
using namespace std;

//work done 6/28
// 1. board of variable size generates with boundaries
// 2. items are generated on the board with random ascii
// 3. except # which is reserved for robot

//todo
// 1. robot class and movement rules
// 2. random colors for targets
// 3. random phrase yell
// 4. fortune cookie saying completion game
//      - find specifc items in order to complete phrase

int main(){
    Board board(10,10,3);
    board.disp();
    return 0;
}
