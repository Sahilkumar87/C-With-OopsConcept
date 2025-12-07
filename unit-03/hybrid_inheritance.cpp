#include<iostream>
using namespace std;

class sahil{  // A
    public:
    sahil(){
        cout << "parrent class A" << endl;
    }
};

class sahil2{ // B
    public:
    sahil2(){
        cout << "parent class B" << endl;
    }
};


class sahil3:public sahil{ // C
    public:
    sahil3(){
        cout << "child class C of A" << endl;
    }
};

class sahil4:public sahil , public sahil2{ // D
    public:
    sahil4(){
        cout << "child class of d inherited by A and B" << endl;
    }
};



int main(){
    sahil4 s4;

return 0;
}


                    //        [A]        [B]
                            //  \\      //
                           //    \\    //
                          //      \\  //   
             //         [C]        [D]   