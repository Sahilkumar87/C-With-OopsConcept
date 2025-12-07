#include<iostream>
using namespace std;

class hello{
    int a=9;
    int b=5;
    public:
    int sum(){
        cout << a+b << endl;
        return a+b;
    }
};

int main (){
    hello s1;
    cout << "the sum is = " << s1.sum()<<endl;
    return 0;
}