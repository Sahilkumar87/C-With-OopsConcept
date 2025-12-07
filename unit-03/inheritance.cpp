#include<iostream>
using namespace std;

class sahil{
    public:
    int a=1;
    int b=2;
    
};

class kumar:public sahil{
    public:
    int c=3;
    int d=4;
    void display(){

        cout << a+b+c+d << endl;
    }

};

int main(){
    sahil s1;
    kumar k1;
    cout << s1.a << endl;
    cout << s1.b << endl;
    cout << k1.c << endl;
    cout << k1.d << endl;
    k1.display(); 



return 0;
}