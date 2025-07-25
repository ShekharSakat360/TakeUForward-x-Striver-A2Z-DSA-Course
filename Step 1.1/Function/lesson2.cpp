#include <bits/stdc++.h>
using namespace std;

//Functions are set of code which perform something for you
//Functions are used to modularise code
//Functions are used to increase readability 
//Functions are used to use same code for multiple timess

//There are 4 types of functions
//void 
//return
//parameterised
//non-parameterised

//This is an Example of Parameterised Void Function
//Function with  argument and no return value

void printName(string name)
{
    cout << "Hey " << " " << name << endl;
}
int main()
{
    string name;


    
    cin >> name;
    printName(name);
    return 0;

}