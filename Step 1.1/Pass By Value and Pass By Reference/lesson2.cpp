#include <bits/stdc++.h>
using namespace std;
//Functions are set of code which perform something for you
//Functions are used to modularise code
//Functions are used to increase readability 
//Functions are used to use same code for multiple timess

//pass by Reference
//In Order to modify the original value we need to send the 
//address of num it will sent the original value at location
//and this will modify the value once the address is send
void doSomething(int &num)
{
    cout << num << endl;
    num+=5;

    cout << num << endl;
    num+=5;

    cout << num << endl;
    num+=5;
}

int main()
{
    int num = 10;
    doSomething(num);
    cout << num << endl;

    return 0;
}