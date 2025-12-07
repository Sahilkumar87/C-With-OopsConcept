#include<iostream>
using namespace std;
class sneha{
    int a;
    public:
    void readData(){
        int b;
        this-> a = b;
    }
    void setData(){
        cout << "enter the value of a is "  << endl;
        cin >> a;
        cout << "the value of a  is " <<  a << endl;
    }

};

int main(){
    // this is a keyword which is a pointer which points 
    //to the object which invokes the member function
    sneha s1;
    s1.readData();
    s1.setData();

return 0;
}