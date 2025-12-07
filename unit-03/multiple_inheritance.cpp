#include<iostream>
using namespace std;

class sahil{
    public:
    sahil(){
        cout << "parrent class 1" << endl;
    }
};



class sahil1{
    public:
    sahil1(){
        cout << "parrent class 2" << endl;
    }
};



class sahil2:public sahil ,public sahil1{
    public:
    sahil2(){
        cout << "child of hello and hello2 class " << endl;
    }
};


int main(){
    sahil2 s2;

return 0;
}