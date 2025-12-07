#include<iostream>
using namespace std;

class sahil{
    protected:
    int a;
  friend void kumar(sahil);
};

  void kumar(sahil s){
     s.a=10;
        cout << "this is a protected specifier the value of a = " << s.a << endl;
    }


int main(){
    sahil s1;
    kumar(s1);

return 0;
}