#include<iostream>
using namespace std;

class sahil{
    public: 
    void hi(int a, int b){
        //cout << a+b << endl;
       // cout << "enter the no " << endl;
        for(int i=a; i<=10; i++){
            cout << a << " X " << i <<" = " << a*i << endl;
        }
        for(int j=b; j<=10; j++){
            cout << b << "X" << j << " = " << b*j <<endl;
        }
    }

    //void hi(double a, double b){
      //  cout << a+b << endl;

    //}

};
int main(){

    sahil s1;
    s1.hi(4,5);
   // s1.hi(1.2, 2.3);
return 0;
}