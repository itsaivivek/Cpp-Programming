// Overload constructors in a class for different initialization ways.
#include<iostream>
using namespace std;

class Calculator{
    float area;
    public:
        Calculator(){
            area = 0;
        }
        Calculator(int r){
            area = 3.14*r*r; // area of circle;
        }
        Calculator(float l){
            area = l*l;  // area of square;
        }
        Calculator(float l, float b){
            area = l*b; // area of rectangle;
        }
        
        void displayArea();
};
void Calculator ::displayArea(){
    cout<<"The area is "<<area<<endl;
}

int main(){
    Calculator obj;
    obj.displayArea();
    Calculator square(float(1.4)), rectangle(4, 5), circle(4); // Here we have converted 1.4 into float so that 
    // compiler will call spectific constrctor of area of square. 
    square.displayArea();
    rectangle.displayArea();
    circle.displayArea();
    return 0;
}