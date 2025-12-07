/*
#include<stdio.h>
int main(){
    int a=5;
    float b;
    cout << sizeOf(++a,b);
    cout << a;
    return 0;
}*/

/*
#include <stdio.h>
int  fun(int a)
{
    printf("hello");
    return a;
}
void main()
{
    fun(2);
}
*/
/* #include<stdio.h>
int main(){
    char a= 74;
    printf("%d",&a);
    return ;
}
*/

/*
#include<iostream>
using namespace std;

int main (){
    int p;
    bool a = true;
    bool b = false;

    int x = 10;
    int y = 5;
    p = ((x/y) + (a+b));
    cout << p;


    return 0;
}  */


/*
#include<iostream>
using namespace std;

int main(){
    int arr[] = {0,2,4,6,7,5,3};

    int result=0;
    for(int i=0; i<8; i++){
     result +=arr[i];
    }
    cout << result << endl;
    return 0;
}*/

/*
#include<iostream>
using namespace std;
 
int main(){
    int a=10;
    int &b=a;
    int &c=b;
    c=29;

    cout << &a << endl;
    cout << &b << endl;
    cout << &c << endl;
    return 0;
}*/

/*

#include<iostream>
using namespace std;
void hi(int &num){
    num +=5;
    int b=num;
    cout << b << endl;
}

int main(){
    int user=10;
    hi(user);
    cout << user << endl;
    hi(user);
}
*/


#include<iostream>
using namespace std;

int main(){
    int a=10;
    int& b=a;
    int& c=b;
    int& a=c;

    cout << a << endl;
    cout << b << endl;
    cout << c << endl;
    cout << a << endl;
    


    cout << b << endl;
    return  0;
}
