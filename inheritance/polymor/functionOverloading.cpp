#include<iostream>
using namespace std;

class Loading{
public:
    void sum(int a, int b){
        cout << a+b << endl;
    }

    void sum(string a, string b){
        cout << a+b << endl;
    }

    void sum(int a, int b, float c){
        cout << a+b+c << endl;
    }
};

int main(){
  Loading a;
  a.sum(10,7);
  a.sum("mua","iyah");
  a.sum(13,26,17.2);
}
