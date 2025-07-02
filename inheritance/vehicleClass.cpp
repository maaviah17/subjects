#include<iostream>
using namespace std;

class Vehicle{
public:
    int topSpeed;
    float mileage;
    string fuel;

};

class Car : public Vehicle{
public:
    int seats;
};

class Bike : public Vehicle{
public:
    int gears;
};

int main(){
    Bike b1;
    b1.mileage = 45.1;
    cout << b1.mileage << " " << endl;
    
    Car c1;
    c1.fuel = "diesel";

    cout << c1.fuel << " " << endl;
}