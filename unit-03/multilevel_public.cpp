#include<iostream>
using namespace std;

class sahil{
    public:
    int a = 10;
};

class kumar:public sahil{
    public:
    int b=20;

};
class prabhat:public kumar{
    public:
    int c = 30;
    void sum(){
        int s= a+b+c;
        cout << s << endl;
    }
};

int main(){
    prabhat p;
    p.sum();



return 0;
}