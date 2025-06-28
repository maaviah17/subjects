#include<iostream>
using namespace std;

class Vector{
public:
    int size;
    int capacity;
    int* arr;

    Vector(){
        size=0;
        capacity=1;
        arr = new int[1];
    }

    void add(int element){
        if(size==capacity){
            capacity *= 2 ; 
            int* arr2 = new int[capacity];
            for(int i=0; i<size; i++){
                arr2[i] = arr[i];
            }
            arr = arr2;
        }
        arr[size++] = element;
    }

    void print(){
        for(int i=0; i<size; i++){
            cout << arr[i] << " " ;
        }
        cout << endl;
    }

    int getIndex(int idx){
        if(idx >= size || idx < 0){
            cout << "Invalid index provided" << endl;
            return -1;
        }
        return arr[idx];
    }

    void remove(){
        if(size==0){
            cout << "Array is empty !!" << endl;
        }

        size--;
    }

};

int main(){

    Vector v;
    v.add(10);

    v.add(17);
    //  cout << "size : " << v.size << " " << "capacity : " << v.capacity << " " << endl;
    v.add(21);
    v.print();
    //  cout << "size : " << v.size << " " << "capacity : " << v.capacity << " " << endl;
    cout << v.getIndex(1) << " " << endl;
    v.remove();
    v.print();


}
