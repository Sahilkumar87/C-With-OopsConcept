#include<iostream>
using namespace std;

class h{
    public:
    int a=11;


};
class h1:public h{
    public:
    void print(){
        cout << a << endl;
    }
};
class h2:public h{
    public:
    void print(){
        cout << a << endl;
    }
};

int main(){
    h s1;
    h1 s2;
    s2.print();


return 0;
}