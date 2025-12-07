#include<iostream>
using namespace std;

 class Teacher{
    public:
        string name;
        string surname;
        string city;
        string phone{10};
     // take input form user
        void readData(){
            cout << "enter the name -->" << endl;
            cin >> name;
            cout << "enter the surname -->" <<endl;
            cin >> surname;
            cout << "enter the city -->" << endl;
            cin >> city;
            cout << "enter the phone number -->" << endl;
            cin >> phone;
        }

        // print output from user

        void printData(){
            cout << "your name is -->" << name << endl;
            cout << "your surname is --> " << surname << endl;
            cout << "your city is --> " << city << endl;
            cout << "your phone no is --> " << phone << endl;
        }
    };


int main(){
    
   int num;
   cout << "enter the number of student -->" << endl;
   cin >> num;
   Teacher t1[num];

   for(int i=0; i<num; i++){
    cout << "enter the " << i+1 << "studnet detail" << endl;
    t1[i].readData();
   }

   for(int i=0; i<num; i++){
    t1[i].printData();
   }

    
return 0;
}