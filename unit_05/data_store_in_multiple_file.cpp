#include<iostream>
#include<fstream>
using namespace std;


int main(){
    int n1;
    int n2;
    cout << "enter the fisrt number " << endl;
    cin >> n1;
    cout << "enter the second number " << endl;
    cin >> n2;

    for(int i=n1; i<=n2; i++){
        for(int j=1; j<=10; j++){
            cout << i << "X" << j << "="<<  i*j;
            
        }
          cout << endl;
    }
    ofstream sahil("C:/arya_student_Data/kumar.txt.");
    sahil.close();

return 0;
}
