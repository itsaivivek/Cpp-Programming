// Define a class for a car with member functions and create objects.

#include<iostream>
using namespace std;

class Car{
    private:
        int carNumber;
        float carPrice;
    public:
        void setData(int a, float b){
            carNumber = a;
            carPrice = b;
        }
        int getNumber();
        float getPrice();
};

int Car::getNumber(){
    return carNumber;
}
float Car::getPrice(){
    return carPrice;
}

int main(){
    Car c1;
    c1.setData(1204, 48.50);
    int carNumber = c1.getNumber();
    float carPrice = c1.getPrice();
    cout<<"The car number is: "<<carNumber<<" and its price is $"<<carPrice<<"K"<<endl;
    return 0;
}