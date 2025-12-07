 #include<iostream>
 using namespace std;

 class sahil{
    public:
    int a;
    void hii(){
        cout << "sahil" << endl;
    }
 };

 class kumar:public sahil{
    public:
    void hii1(){
        cout << "helo world" << endl;
    }
 };
 
 int main(){
    kumar k1;
    k1.hii();
    k1.hii1();
 
 return 0;
 }