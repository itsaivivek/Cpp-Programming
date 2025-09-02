// Create a simple class representing a point with x and y coordinates.

#include<iostream>
using namespace std;

class Coordinates{
    public:
        float x, y;
};

int main(){
    Coordinates p1, p2;
    p1.x = 1;
    p1.y = 3;
    p2.x = 2;
    p2.y = 0;
    cout<<"The coordinates of point p1 is ("<<p1.x<<", "<<p1.y<<")"<<endl;
    cout<<"The coordinates of point p2 is ("<<p2.x<<", "<<p2.y<<")"<<endl;
    return 0;
}