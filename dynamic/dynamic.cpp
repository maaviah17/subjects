#include<iostream>
using namespace std;

class Cricketer{
public:
    string name;
    int runs;
    float avg;

    Cricketer(string name, int runs, float avg){
        this->name = name;
        this->runs;
        this->avg = avg;
    }
}; 

int main(){
    
    Cricketer c1("Virat Kohli", 27500, 52.7);
    Cricketer* c2 = new Cricketer("Hanuma Vihari" , 4400, 42.8);

    // int* ptr = new int(5);
    // cout << *ptr << endl;
    // cout << ptr << endl;

    cout << c1.name << endl;
    cout << c2->name << endl;

}