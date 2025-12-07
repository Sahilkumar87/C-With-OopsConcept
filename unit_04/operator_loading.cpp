#include<iostream>
using namespace std;

class sahil{
    public:
    int value;
    sahil(int a){
        value=a;

    }
    sahil operator + (const sahil &num){
        return sahil(value*num.value);
    }

    void print(){
        cout << "result = "<< value << endl;
    }
};

int main(){

    int n1;
    int n2;
    cout << "enter the a" << endl;
    cin >> n1;
    cout << "enter the b" << endl;
    cin >> n2;

    sahil s1(n1),s2(n2);
    sahil s3=s1+s2;
    s3.print();


return 0;
}