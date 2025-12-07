#include<iostream>
using namespace std;

template<typename T > T Mymax(T x){
  return x & 1 == 1;  // give condition
}

int main(){
    int num;
    cout << " enter the num " << endl;
    cin >> num;
    cout << "this given num is   " << Mymax<int>(num) << endl;
    boolean 
   // cout << "thsi is the bigger one " << Mymax<char> ('b' , 'd') << endl;
   // cout << " this is the bigger one " << Mymax<long>(5555,767676767) << endl;

return 0;
}