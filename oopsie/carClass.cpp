#include<iostream>
using namespace std;

class Car{
public:
    string name;
    int price;
    int seats;
    string type;
};

void print(Car c){
    cout << c.name << " " <<  c.price <<  " " << c.seats <<  " " <<  c.type <<   " " << endl ;
}

int main(){
    
    Car c1,c2 ;
    c1.name = "Honda City";
    c1.price = 1350000;
    c1.seats = 4;
    c1.type = "Sedan";

    c2.name = "Scorpio";
    c2.price = 1650000;
    c2.seats = 6;
    c2.type = "SUV";

    print(c1);
    print(c2);

    
    return 0;

}