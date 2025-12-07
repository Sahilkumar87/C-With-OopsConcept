#include<iostream>
using namespace std;

class book{
    private:
    int price;
    string tittle;


    public:
    book(int sahil, string prabhat){

        price = sahil;
        tittle = prabhat;
        book b1(sahil ,prabhat);
        cout << "enter the price " << endl;
        cin >> sahil;
        cout << "ente the tittle" << endl;
        cin >> prabhat;
    }


    void display(){
        cout << "price = " << price << endl;
        cout << "tittle = " << tittle << endl;
    }
};

int main(){
    int num;
    cout << "enter the number of books" << endl;
    cin >> num; 
    book b[num];

    for(int i=1; i<=num; i++){
        b[i].book();

    }
    for(int i=1; i<=num; i++){
        b[i].display();
    }

return 0;
}