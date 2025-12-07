
#include<iostream>
using namespace std;

int main(){
    int *arr = new int[2];
    for(int i=0; i<=3; i++){
      cout << "enter the array :-" << endl;
      cin >> arr[i];

    }
    for(int i=0; i<=3; i++){
      cout << arr[i] << endl;
    }

    delete[]arr;
    for(int i=0; i<=3; i++){
      cout << arr[i];
    }
  return 0;
}


