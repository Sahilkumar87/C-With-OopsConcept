#include<iostream>
using namespace std;

class sahil{
    public:
    int kumar(int a, int b){
        cout << a+b << endl;
    }


     double kumar(double a, double b){
        cout << a+b << endl;
    }
    
};

int main(){
    sahil s1;
    s1.kumar(10,55);
    s1.kumar(55.44, 44.55);
return 0;
}