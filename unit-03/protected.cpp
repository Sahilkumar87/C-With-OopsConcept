//protected 
#include<iostream>
using namespace std;

class sahil{
    protected:
    int a=10;
    int b=20;

};
class kumar:public sahil{
    public:
    void print(){
        cout << a << endl;
        cout << b << endl;
        cout << a+b << endl;
    }

    

};

int main(){
    kumar k1;
    k1.print();

return 0;
}