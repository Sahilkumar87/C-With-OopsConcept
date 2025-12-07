#include<iostream>
#include<fstream>
using namespace std;

int main(){

    string user;
    string user1;
    cout << "enter the first person " << endl;
    cin >> user;
    cout << "enter the second person " << endl;
    cin >> user1;
    string a = "B-55";
    string b = "B-44";
    ofstream sneha("C:/arya_student_Data/sahil.txt");


    sneha<< "NAME :-" << user1 << " SEAT NUMBER :-" << b << endl;
    sneha<< "NAME :-" << user << " SEAT NUMBER :-" << a << endl;
    sneha.close();


return 0;
}