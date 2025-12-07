/*
#include<iostream>
using namespace std;

class sahil{
    int a=0;
    public:
    sahil(){
        a++;  // a+=1; // a= a+1;
        cout << "this is constructor is creation" << a <<  endl;
    }
    ~sahil(){
        cout << "this is distructor is destroy" << a << endl;
         a--; // a-=1; a= a-1;
    }
};

int main(){
//    int n;
//    for(int i=0; i<=n; i++){
//     cout << sahil s[i] << endl;
//    }
    sahil s1,s2,s3,s4;

return 0;
}*/


#include<iostream>
using namespace std;
int count;

class sahil{
    public:
    sahil(){
        count++; // count = count+1;
        cout << " this a constructor is creation" << count << endl;
    }
    ~sahil(){
        cout << "this is a distructor is destroy" << count << endl;
        count--; // count = count-1;
    }

};

int main(){
    sahil s1,s2,s3;

return 0;
}