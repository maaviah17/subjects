#include<iostream>
using namespace std;

class Student{
public: 
    string name;
    int roll;

    void display(){
        cout << name << " "  << roll << " " << endl;
    }
    Student(string name,int roll, int marks){
        this->name = name;
        this->roll = roll;
        this->marks = marks;
    }

    // this is called getter
    int getMarks(){
        return marks;
    }

    // setter
    void setMarks(int m){
        marks = m;
    }

private:
    int marks;
};

int main(){
  
    Student s1("maaviah", 22, 92.4);
    s1.display();
    int m = s1.getMarks();
    cout << m << " " << endl;
    s1.setMarks(90.6);
    cout << s1.getMarks() << " " << endl;

}
