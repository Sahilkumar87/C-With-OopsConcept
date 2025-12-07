#include<iostream>
using namespace std;

class sahil{
    public:
    virtual void kumar() {
        cout << "this is a parrent class" << endl;
}
};


class sahil1:public sahil{
    public:
    void kumar()override {
        cout << "this is a first child class " << endl;
}
};

class sahil2:public sahil{
    public:
    void kumar()override{
        cout << "this is a second child class" << endl;
}
};


int main(){
    sahil *ptr = new sahil;
    sahil *ptr1 = new sahil1;
    sahil *ptr2 = new sahil2;
    ptr->kumar();
    ptr1->kumar();
    ptr2->kumar();

return 0;
}