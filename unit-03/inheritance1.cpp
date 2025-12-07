#include<iostream>
using namespace std;

class average{
    public:
    int a;
    int b;
    int c;
    int d;
    void sum(){
        float e = (a+b+c+d);
    }
    void persentage(){
        float f = (a+b+c+d)/4;


    }
    // float e = ((a+b+c+d)%400)*100;
    // float f = (a+b+c+d)/4.0;
    //int e = (a+b+c+d)%400;
    //int f = (a+b+c+d);
    // void read(){
    //     cout << "enter the a " << endl;
    //     cin >> a;
    //     cout << "enter the b " << endl;
    //     cin >> b;
    //     cout << "enter the c " << endl;
    //     cin >> c;
    //     cout << "enter the d " << endl;
    //     cin >> d;
    // }
    

};
class persentage:public average{
    public:

    void read(){
        cout << "enter the a " << endl;
        cin >> a;
        cout << "enter the b " << endl;
        cin >> b;
        cout << "enter the c " << endl;
        cin >> c;
        cout << "enter the d " << endl;
        cin >> d;
    }

   void persentage1(){
    cout << "the persentage of is = " << sum() << "%" << endl; 
   }


   void average(){
    cout << "the average of is = " << f << endl; 
    }

};

int main(){
    persentage p1;
    p1.read();
    p1.persentage1();
    p1.average();

return 0;
}

// team h4x;