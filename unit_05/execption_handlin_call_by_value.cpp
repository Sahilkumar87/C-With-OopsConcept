#include<iostream>
#include<stdexcept>
using namespace std;


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
    catch(runtime_error e){   // -----spaceholder
        cout << "please enter the correct pin \n invalid pin " << e.what()<< endl;
    }

 
return 0;
}