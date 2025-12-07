#include<iostream>
#include<fstream>
using namespace std;


int main(){

    string name;
    cout << "enter your name" << endl;
    cin >> name;

    ofstream sahil("C:/TC_notes_3rd.txt");
    sahil<<"welcome to our web page"<< name << endl;
    sahil.close();

return 0;
}