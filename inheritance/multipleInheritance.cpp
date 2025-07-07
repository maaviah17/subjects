#include <iostream>
using namespace std;

class Cricketer{
public:
    int wickets;
    float economy;
};

class Engineer{
public:
    int age;
    string domain;
    int salary;
    int experience;
};

// USA T20 WC
class Netravalkar : public Cricketer,public Engineer{
public:
    string name;
    int phoneno;
};


int main(){
    Netravalkar n1;
    n1.name = "Suarabh";
    n1.wickets = 21;

    cout << n1.name << " " << endl ;
    cout << n1.wickets << " " << endl ;
}