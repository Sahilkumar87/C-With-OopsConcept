#include<iostream>
using namespace std;

int main(){
    int *a;
    int *b;
    int *c;
    a=new int(7);
    b=new int(5);
    
    cout << "the value of a = " << *a  << " the address of a = " << a << endl;
    cout << "the value of b = " << *b  << " the address of b = " << b << endl;
   
 return 0;
}