#include<iostream>
using namespace std;

class helo{
    public:
    int *a;
    // a = new int();

    helo(int b){
      //  a = new int();
        
         a = new int(b); //---> not store in memory
        cout << *a << endl;
    }
    ~helo(){
        cout << "memory destroyed " << endl;
        delete a;
    }
};

int main(){

 helo h1(19);
return 0;
}