#include <iostream>
using namespace std;

// student is the new data type
class Student{
public :
    string name;
    int rollno;
    float gpa;
};

int main(){

   Student s1;
   s1.name = "Muawiyah";
   s1.rollno = 22;
   //s1.gpa = 7.3; 
    cin>> s1.gpa;

   Student s2;
   s2.name = "Yash";
   s2.rollno = 46;
   s2.gpa = 8.4; 

   cout << s1.name << endl;
   cout << s2.gpa << endl;
   cout << s1.gpa << endl;


}
