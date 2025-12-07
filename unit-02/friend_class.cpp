#include<iostream>
using namespace std;

class sahil{
    private:
    int a;
    int b;
    int c;
    int d;
    string s = "sahil";
    friend class chandan;
    friend void vishal(sahil); 
};
void vishal(sahil t){
        t.c;
        t.d;
        cout << "enter the c : " << endl;
        cin >> t.c;
         cout << "enter the d : " << endl;
        cin >> t.d;
        cout <<  "multipication " << t.c*t.d << endl;

}

class chandan{
    public:
    void prabhat(sahil s){
        s.a;
        s.b;
        cout << "enter the a : " << endl;
        cin >> s.a;
         cout << "enter the b : " << endl;
        cin >> s.b;
        cout << s.a+s.b << endl;
    }
};
int main(){
    sahil s1;
    chandan s2;
    s2.prabhat(s1);
    vishal(s1);

return 0;
}