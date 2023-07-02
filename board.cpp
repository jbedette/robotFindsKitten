#include "Board.h"
using namespace std;

Board::Board(int a, int b, int num){
    x = a;
    y = b;

    for(int i = 0; i < y; ++i){
       vector<char> temp; 
       for(int j = 0; j < x; ++j){
           temp.push_back(' ');
       }
       map.push_back(temp);
    }

    for(int i = 0; i < y; ++i){
        map[i][0] = '|';
        map[i][x-1] = '|';
    }
    for(int i = 0; i < x; ++i){
        map[0][i] = '_';
        map[y-1][i] = '_';
    }
    cout << genItems(num) << '\n';
    cout << genRobot() << '\n';
}
void Board::disp(){
    for(int i = 0; i < y; ++i){
        for(int j = 0; j < x; ++j){
            char temp = map[i][j];
            cout << temp;
        }
        cout << '\n';
    }
}

int Board::genItems(int num){
    int count = 0;
    while(num >= 0){
        ++count;
        char temp = char(36 + (rand() % (126 - 36 + 1 )));
        srand ( time(NULL));
        int randX = 1 + (rand() % x-1);
        int randY = 1 + (rand() % y-1);
        if(map[randY][randX] == ' '){
            --num;
            items.push_back(temp);
            map[randY][randX] = temp;
        }
    }

    return count;
}

int Board::genRobot(){
    bool occupied = true;
    int count;
    while(occupied){
        ++count;
        srand ( time(NULL));
        int randX = 1 + (rand() % x-1);
        int randY = 1 + (rand() % y-1);
        if(map[randY][randX] != ' '){
            map[randY][randX] = robot.icon;
            robot.x = randX;
            robot.y = randY;
            occupied = false;
            //test
            cout << "robot:" << robot.x << ' '<< robot.y << '\n';
        }
    }
    return count;
}
int Board::moveRobot(char dir){
    int success = 1;
    char charAt = NULL;
    int atX, atY;
    atX = atY = -1;
    switch(dir){
        case 'w':
            atX = robot.x;
            atY = robot.y-1;
            charAt = map[atY][atX];
            break;
        case 'a':
            atX = robot.x-1;
            atY = robot.y;
            charAt = map[atY][atX];
            break;
        case 's':
            atX = robot.x;
            atY = robot.y+1;
            charAt = map[atY][atX];
            break;
        case 'd':
            atX = robot.x+1;
            atY = robot.y;
            charAt = map[atY][atX];
            break;
        default:
            success = 0;
    }
    if(charAt && charAt == ' '){
        map[robot.y][robot.x] = ' ';
        map[atY][atX] = robot.icon;
        robot.x = atX;
        robot.y = atY;
    }
    else{
        success = 0;
        cout << "\n bonk! \n";
    }
    return success;
}