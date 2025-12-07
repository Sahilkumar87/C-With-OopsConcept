/*
#include<iostream>
using namespace std;

int main(){
    class helo{
        public:
        void hii(){
            cout << "this is a first para " << endl;
        }

    }
    class helo2{
        public: 
        void main(){
            cout << "this is a second paraa" << endl;
        }
    };
    int main(){
        helo s1;
        helo2 s1;
    }
    return 0;
}
*/

#include<iostream>
using namespace std;
class sahil{
        public:
        int hi(int a, int b){
            
            cout << "enter the no a :-" << endl;
            cin >> a;
            cout << "enter the no b :-" << endl;
            cin >> b;
            return a+b;
        }

    double hi(double a, double b){
    
        cout << "enter the no a :-" << endl;
            cin >> a;
            cout << "enter the no b :-" << endl;
            cin >> b;

        return a+b;
    }
};

int main(){
    
    sahil s1;
    
    int intsum ;
    double doublesum;

    cout << "the integer value of a+b is " << intsum << endl;
     cout << "the decimal value of a+b is " << doublesum << endl;
   s1.hi();
    s1.hi();
return 0;
}



/*          polymorphism
               /    \
              /      \ 
             /        \
            /          \
compile time              run time
function overloading      function overriding
same functiion name        same functiion name 
same 
 */
