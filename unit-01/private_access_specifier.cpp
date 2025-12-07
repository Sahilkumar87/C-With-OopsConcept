#include<iostream>
using namespace std;

class sahil{
    private:
    int a=10;
    public:
    void kumar(){
        cout << "this is a private specifier the value of a =" << a << endl;
    }

};

int main(){
    sahil s1;
    s1.kumar();

return 0;
}