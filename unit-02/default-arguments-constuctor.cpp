#include<iostream>
using namespace std;

float moneyReceived(int currnetMoney,float interest=1.04){
    return currnetMoney*interest;
}


int main(){
    int money;
    cout << "enter the money" << endl;
    cin >> money;

    cout << "the interest for saving account in 1yr = " << moneyReceived(money) << endl;
    cout << "the interest for current account in 1yr = " << moneyReceived(money,1.4) << endl;
    cout << "the interest for vip account in 1yr = " << moneyReceived(money,1.7) << endl;
return 0;
}