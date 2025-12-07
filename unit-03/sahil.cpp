#include<iostream>
using namespace std;

class sneha{
    public:
    int  sahil(int a, int b){
        int sum = a+b;
        cout << "the addition of a and b is " << sum << endl;

    }
    double sahil(double a, double b){
        double sub = a-b;
        cout << "the substraction of a and b is " << sub << endl;
       
    }
};

int main(){
    sneha s1;
    s1.sahil(4, 5);
    s1.sahil(3.5, 2.4);

return 0;
}
