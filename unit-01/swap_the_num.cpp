
#include<iostream>
using namespace std;

class swap{
    public:
int a;
int b;
void swap1(){
    int c;
    a=b;
    b=c;
    c=a;
    cout << a << endl;
    cout << b << endl;
}

};
int main(){
    swap1 s2();

    cout << "enter the a :" << endl;
    cin >> s2.a;

    cout << "enter the b :" << endl;
    cin >> s2.b;

    
    return 0;
}
