#include<iostream>
using namespace std;

int main(){
    int arr[] = {0,2,4,6,7,5,3};

    int result=0;
    for(int i=0; i<8; i++){
     result +=arr[i];
    }
    cout << result << endl;
    return 0;
}