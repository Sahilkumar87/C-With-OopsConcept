#include<iostream>
#include<stdexcept>
using namespace std;


   /*
    type of execption handling
    1.try -> the block of code inside the error 
    2.catch -> the handle the error 
    3.throw -> identify the error in block of code
    */



class sahil{
    public:
};

int main(){
    try{
        int user;
        cout << "enter the pin" << endl;
        cin >> user;
        if(user==1234){
            cout << "welcome to the atm" << endl;
    
        }
        else{
            throw runtime_error("please enter the only number");
        }
    }
    catch(int num){   // -----spaceholder
        cout << "please enter the correct pin \n invalid pin " << num<< endl;
    }

 
return 0;
}