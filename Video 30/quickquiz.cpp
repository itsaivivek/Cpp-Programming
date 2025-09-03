// Create a funtion(Hint: Make it a friend function) which takes 2 point objects and computes the distance between those points.
#include <iostream>
#include <cmath>
using namespace std;

class Point
{
    int x, y;

public:
    Point(int a, int b)
    {
        x = a;
        y = b;
    }
    void printNumber()
    {
        cout << "The point is (" << x << ", " << y << ")" << endl;
    }
    friend float distanceBetweenPoint(Point, Point);
};

float distanceBetweenPoint(Point o1, Point o2)
{
    float distance, x_distance, y_distance;
    x_distance = ((o2.x - o1.x) * (o2.x - o1.x));
    y_distance = ((o2.y - o1.y) * (o2.y - o1.y));
    distance = sqrt(x_distance + y_distance);
    return distance;
}

int main()
{
    Point p1(3, 4), p2(1, 2);
    p1.printNumber();
    p2.printNumber();
    cout<<"The distance between p1 and p2 is "<<distanceBetweenPoint(p1, p2)<<endl;
    return 0;
}