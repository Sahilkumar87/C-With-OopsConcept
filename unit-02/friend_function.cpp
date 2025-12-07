#include<iostream>
using namespace std;

class Sahil{
    private:
    int a;
    int b;
    friend void kumar(Sahil);
    
};
void kumar(Sahil s){
     s.a;
     s.b;
    cout << "enter the a " << endl;
    cin >> s.a;
    cout << "enter the b" << endl;
    cin >> s.b;
    cout << "result is  = " << s.a+s.b << endl;
}

int main(){
    Sahil s1;
    kumar(s1);

return 0;
}