#include<iostream>
using namespace std;

class sahil{
    private:
    sahil(){
        cout << "this parrent 1"<< endl;
    }
friend class sahil3;

};

class sahil2{
    private:
    friend class sahil3;
    sahil2(){
        cout << "this parrent 2"<< endl;
    }

};
class sahil3:public sahil, public sahil2{
    public:
    sahil3(){
        cout << "this child sahil and sahil2" << endl;
    }


};

int main(){
    sahil3 s3;


return 0;
}