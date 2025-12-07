#include<iostream>
using namespace std;

class A{
    public:
    int a=10;
};

class B: public virtual A{
    public:
};

class C:public virtual A{
    public:

};

class d: public C, public B{
    public:
};

int main(){
    d d1;
    cout << "the value of a is " << d1.a << endl;

return 0;
}