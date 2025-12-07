#include<iostream>
using namespace std;

class A{
    public:
    int sahil;

     
    // default constructor
    A(){
        cout << "aman" << endl;
    }
    
    // paramerterized constructor
     A(int prabhat){
    sahil = prabhat;
     }

    //  copy constructor
    A(A &b){
    sahil = b.sahil;
    }

};

int main(){
  //  A a3;
    A a1(29);
    A a2(a1);
     A a3;

    cout << a2.sahil << endl;

return 0;
}