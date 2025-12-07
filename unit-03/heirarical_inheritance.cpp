#include<iostream>
using namespace std;

class sahil{
    public:
    sahil(){
        cout << "parrent class " << endl;
    }

};

class sahil1:public sahil{
    public:
    sahil1(){
        cout << "child class 1 " << endl;
    }

};

class sahil2:public sahil{
    public:
    sahil2(){
        cout << "child  class 2 " << endl;
    }

};

int main(){
    sahil1 s1;
    sahil2 s2;

return 0;
}