#include<iostream>
using namespace std;

class helo{
    public:
    string name;
    string surname;
    int  mobile_no ;
    string city;
    string grade;
    

};

  int  main(){
    helo s1;

    cout << " welcome to arya college!" << endl;

    cout << "enter your name : "  << endl;
    cin >> s1.name;

    cout << "enter your surname :" << endl;
    cin >> s1.surname;

    cout << "enter your mobile number :"  << endl;
    cin >> s1.mobile_no;

    cout << "enter your city :"  << endl;
    cin >>  s1.city;

    cout << "enter your 12th grade :"  << endl;
    cin >> s1.grade;

    cout << s1.name << endl;
     cout << s1.surname << endl;
      cout << s1.mobile_no<< endl;
       cout << s1.city << endl;
        cout << s1.grade << endl;



    
return 0;
}