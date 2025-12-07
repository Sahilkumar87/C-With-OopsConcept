#include <iostream>
using namespace std;

class helo
{
public:
    helo(){
            int n1,n2;
        cout << "enter the no" << endl;
        cin >> n1 >> n2;
         for(int i=n1; i<=10; i++){
            cout << n1 << " X " << i <<" = " << n1*i << endl;
        }
        for(int j=n2; j<=10; j++){
            cout << n2 << "X" << j << " = " << n2*j <<endl;
        }
    }
     
    };

int main(){
    helo s1;
   
    return 0;
}


/*
constructor in c++ is special member function of a class 
that is automatically called whenever on object of a class is created
 the primary purpose is to initialize 
 the object data member end establish its initial state
 
 
 
 there are 4types of constructor in c++
 1.default constructor 
 2.parameterized constructor 
 3.copy constructor 
 4.move constructor*/