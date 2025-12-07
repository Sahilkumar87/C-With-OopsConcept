#include<iostream>
using namespace std;

class sum1{
    public:
    int sum=0;
    int n;
   void display(){
    cout << "enter the sum " << endl;
    cin >> n;
    for(int i=1; i<=n; i++){
        sum += i;
        cout << "the sum of " << n << " is " << endl;
    }
   }
};

int main(){
    sum1 s1;
    s1.display();


return 0;
}