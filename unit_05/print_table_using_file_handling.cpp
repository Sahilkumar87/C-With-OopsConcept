#include<iostream>
#include<fstream>
using namespace std;

int main(){
    int n;
    cout << "enter the no " << endl;
    cin >> n;
    for(int i=1; i<=10; i++){
    cout << n << " X " << i  << " = " << n*i << endl;

    ofstream sahil("C:/arya_student_Data/sahil.txt");
    sahil<< n << " X " << i  << " = " << n*i << endl;
    sahil.close();
      

    }

   
return 0;
}
