// Implement the solution for an inheritance exercise involving shapes.
#include <iostream>
using namespace std;

class Shape
{
    static int count;
protected:
    float area;
    float perimeter;
    string name;
public:
    Shape(){
        count++; // Increase no of count every time an object is created.
        // Count used to track no of shapes created.
    }
    void setData(float a = 0, float p = 0, string n = "Unknown"){
        area = a;
        perimeter = p;
        name = n;
    }
    void show(){
        cout<<"Shape "<<count<<"\nName: "<<name<<endl;
        cout<<"Area = "<<area<<"\tPerimeter = "<<perimeter<<endl;
    }
};
int Shape::count = 0;
class Square : public Shape
{
    float length;

public:
    Square(){
        length = 0;
        setData((length*length), (4*length), "Square");
        show();
    }
    Square(int l){
        length = l;
        setData((length*length), (4*length), "Square");
        show();
    }
};
class Rectangle : public Shape
{
    float length;
    float breadth;
public:
    Rectangle(){
        length = 0;
        breadth = 0;
        setData((length*breadth), (2*(length+breadth)), "Rectangle");
        show();
    }
    Rectangle(int l, int b){
        length = l;
        breadth = b;
        setData((length*breadth), (2*(length+breadth)), "Rectangle");
        show();
    }
};

int main()
{
    Shape obj;
    obj.setData();
    obj.show();
    Square obj1, obj2(3);
    Rectangle r1, r2(3, 4);
    return 0;
}