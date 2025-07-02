#include<iostream>
using namespace std;

class Scooty{
public:
    int topSpeed;
    float mileage;

private:
    int bootSpace;
};

// this means, Class Bike EXTENDS Scooty
// scooty is the derived class
class Bike : public Scooty{
public:
    int gears;
};

int main(){
    Bike b1;
    b1.mileage = 45.1;
}