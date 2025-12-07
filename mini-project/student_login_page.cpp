#include <iostream>
using namespace std;
class hello
{
public:
    string name;
    string city;
    int per;
    string dept;
    int contect;
    string state;

    void admin()
    {
        cout << endl;
        cout << "Admin Department" << endl;
        cout << "STUDENT NAME     :-" << name << endl;
        cout << "STUDENT CITY     :-" << city << endl;
        cout << "12th PERSENTAGE  :-" << per << endl;
        cout << " CONTECT          :-" << contect << endl;
        cout << "STATE           :-" << state << endl;
    }

    void HOD()
    {
        cout << endl;
        cout << "HEAD OF DEPARTMENT" << endl;
        cout << "STUDENT NAME     :-" << name << endl;
        cout << "STUDENT CITY     :-" << city << endl;
        cout << "12th PERSENTAGE  :-" << per << endl;
        cout << "DEPARTMENT       :-" << dept << endl;
    }

    void account()
    {
        cout << endl;
        cout << "ACCOUNTENT DEPARTMENT" << endl;
        cout << "STUDENT NAME     :-" << name << endl;
        cout << "DEPARTMENT       :-" << dept << endl;
    }

    void food()
    {
        cout << endl;
        cout << "STUDENT NAME     :-" << name << endl;
        cout << "STUDENT CITY     :-" << city << endl;
        cout << "DEPARTMENT       :-" << dept << endl;
    }
};
int main()
{
    hello s1;
    cout << "Welcome in Arya college of Engineering" << endl;
    cout << endl;
    cout << "STUDENT DETAILS" << endl;
    cout << "Enter your full name" << endl;
    cin >> s1.name;
    cout << "Enter your city" << endl;
    cin >> s1.city;
    cout << "Enter your 12 persentage" << endl;
    cin >> s1.per;
    cout << "Enter your department" << endl;
    cin >> s1.dept;
    cout << "Enter your contect no" << endl;
    cin >> s1.contect;
    cout << "Enter your state" << endl;
    cin >> s1.state;
    cout << "Thanku for visiting our college." << endl;
    cout << "Your resiostration is complete" << endl;

    string username;
    string password;
    cout << "enter the username" << endl;
    cin >> username;
    cout << "enter the password" << endl;
    cin >> password;

    if (username == "admin@123" && password == "admin")
    {
        s1.admin();
    }
    else if (username == "hod@123" && password == "hod")
    {
        s1.HOD();
    }
    else if (username == "account@123" && password == "account")
    {
        s1.account();
    }
    return 0;
}