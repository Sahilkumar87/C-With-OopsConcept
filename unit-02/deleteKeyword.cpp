
#include<iostream>
using namespace std;

int main(){
    int size;
    cout << "enter the array :-" << endl;
    cin >> size;

    int *array = new int[size];
    delete [] array;

    cout << "the array is " << size << endl;
    cout << "the address of array is " << array << endl;
return 0;
}