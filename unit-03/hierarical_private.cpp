#include<iostream>
using namespace std;

class sahil{
    private:
    sahil(){
        cout << "parrent class" << endl;
    }
friend class sahil2;
};

class sahil2:public sahil{
    private:
    sahil2(){
        cout << "child class 1" << endl;
    }
    friend class sahil3;
};

class sahil3:public sahil{
    public:
    sahil3(){
        cout << "child class 2" << endl;
    }

};

int main(){
    // sahil2 s1;
    sahil3 s2;

return 0;
}
