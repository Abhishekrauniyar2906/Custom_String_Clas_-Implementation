#include <iostream>
#include "MyString.h"
#include <string>

using namespace std;
 
int main()
{ 
    MyString a = "Abhishek";
    MyString b = " Rauniyar";
    a+=b;
    cout<<a<<endl;

    a.erase(70, 1);
    cout<<a<<endl;

    return 0;
}