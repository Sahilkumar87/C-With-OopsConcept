
/*
#include <iostream>
#include <string>
using namespace std;
int main() {
  struct {
    int myNum;
    string myString;
  } myStructure;
  myStructure.myNum = 99;
  myStructure.myString = "sahil kumar and kumar prabhat!";
  cout << myStructure.myNum << "\n";
  cout << myStructure.myString << "\n";
  return 0;
}
*/



#include <bits/stdc++.h>
using namespace std;
class Parent
{   
    // protected data members
    protected:
    int id_protected;
   
};
class Child : public Parent
{
    public:
    void setId(int id)
    {
        id_protected = id;
        
    }
    void displayId()
    {
        cout << "id_protected is: " << id_protected << endl;
    }
};
int main() {
    
    Child obj1;
    obj1.setId(81);
    obj1.displayId();
    return 0;
}
