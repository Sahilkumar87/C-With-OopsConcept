#include<iostream>
using namespace std;

class sahil{
    public:
    int a;
    int b;
    void getdata(){
        cout << "enter the first number: ";
        cin >> a;
        cout << "enter the second number: ";
        cin >>  b;

    }

    void printdata(){
        cout << "the value of A: " << a << endl;
        cout << "the value of B: " << b << endl;
    }

    void operator=(sahil bb){
        a = bb.a;
        b = bb.b;
    }

};

int main(){
    sahil aa, bb;
    bb.getdata();
    aa = bb;
    aa.printdata();
    bb.printdata();
return 0;
}