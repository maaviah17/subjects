#include<iostream>
using namespace std;

class Cricketer{
public:
    string name;
    int runs;
    float avg;

    Cricketer(string name, int runs, float avg){
        this->name = name;
        this->runs = runs;
        this->avg = avg;
    }

};

void change(Cricketer* c){
    // (*c).avg = 55.7; 
    // below will do the same work
    c->avg = 68.1;
}

int main(){

    Cricketer c1("Virat Kohli",27000,52.3);
    Cricketer c2("Rohit Sharma", 20000,46.1);

    cout << c1.avg << endl;
    change(&c1);
    cout << "now the avg will change" << endl;
    cout << c1.avg << endl;

    Cricketer* p1 = &c1;
    (*p1).avg = 51.6;

    cout << (*p1).runs << endl ;
    cout << (*p1).avg << endl ;


    cout << c1.name << " " << c1.runs << " " << endl;
    cout << c2.name << " " << c2.runs << " " << endl;
    
}