
/*
#include<iostream>
using namespace std;

    inline int add(int a,int b){
        return a+b;

    }
    int main(){
        cout << "addition of a and b = " << add(2,3);
return 0;
}
*/

#include<iostream>
using namespace std;

inline int product(int a, int b){
  
    return a*b;
}
int main(){

    int a;
    int b;
    cout << "enter the value a" << endl;
    cin >> a;
    cout << "enter the value of b" << endl;
    cin >> b;
    

    cout << "the product of " << a << " and " << b << " is " << product(a,b) << endl;




return 0;
}