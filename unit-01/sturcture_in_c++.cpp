#include<iostream>
using namespace std;

struct book{
    private:
    string name;
    string id;
    int price;
    public:
    void getData(){
        cout << "enter name id" << endl;
        cin >> name >> id;
    }
    void showData(){
        cout << "name = " << name << endl;
        cout << "id = " << id << endl;

    }

};

int main(){
    book b1,b2;
    b1.getData();
    b2.getData();
    b1.showData();
    b2.showData();

return 0;
}