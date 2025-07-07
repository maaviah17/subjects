#include <iostream>
using namespace std;

class Box {
public:
    int length;

    Box(int l) {
        length = l;
    }

    Box operator+(Box b) {
        Box temp(length + b.length);
        return temp;
    }
};


int main() {
    Box b1(4);
    Box b2(6);
    Box b3 = b1 + b2;

    cout << b3.length << endl;  
}
