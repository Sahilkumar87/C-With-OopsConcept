#include<iostream>
using namespace std;

int main(){
    // int a = 10;
    //static memory ---> compile time allocate

    // dynamic memory allocation ---> memory allocate at run time
    // dayatype *var = new datatype

    int *a = new int;
    *a = 44;
    cout << "the value of a is " << a << endl; // print address 
    cout << "the value of a is " << *a << endl; // print value 


return 0;
}