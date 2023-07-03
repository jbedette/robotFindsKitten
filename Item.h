#include <iostream>
using namespace std;

struct Item{
    Item(int,int,int,bool,string);
    int x;
    int y;
    int vPosition;
    bool victory;
    string text;
}