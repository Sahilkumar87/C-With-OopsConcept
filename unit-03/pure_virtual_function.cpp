#include<iostream>
using namespace std;

class sahil{
    public:
    virtual void kumar()=0;
};

class kumar:public sahil{
    public:
    kumar(){
        cout << "this is a child class "  << endl;
    }

};

int main(){
    sahil s1;

return 0;
}