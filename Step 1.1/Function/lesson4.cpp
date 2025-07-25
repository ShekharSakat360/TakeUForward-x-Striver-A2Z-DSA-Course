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
//Function with no argument and with return value

void sum(int num1,int num2)
{
    int num3;
    num3 = num1 + num2;
    cout << num3 << endl;

}

int main()
{
    int num1,num2;
    cin >> num1 >> num2;

    sum(num1,num2);
 
    return 0;
}