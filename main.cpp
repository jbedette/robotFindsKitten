#include <iostream>
#include <vector>
#include "Board.h"
using namespace std;

//items work:
// - make phrase list
// - import phrase
// - create items with phrases
// - make collecting certain items in order a win condition

//todo
// 1. robot class and movement rules
// 2. random colors for targets
// 3. random phrase yell
// 4. fortune cookie saying completion game
//      - find specifc items in order to complete phrase

int main(){
    Board board(30,10,3);
    board.disp();
    return 0;
}
