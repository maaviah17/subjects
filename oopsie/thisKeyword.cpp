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

    int matches(){
        return runs/avg;
    }
};

int main(){

    Cricketer c1("Virat Kohli",27000,52.3);
    Cricketer c2("Rohit Sharma", 20000,46.1);

    cout << c1.name << " " << c1.runs << " " << endl;
    cout << c2.name << " " << c2.runs << " " << endl;

    cout << "Number of matches kohli has played : " << c1.matches() << endl;
    cout << "Number of matches kohli has played : " << c2.matches() << endl;
    
}