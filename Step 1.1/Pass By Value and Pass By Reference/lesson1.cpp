#include <bits/stdc++.h>
using namespace std;
//Functions are set of code which perform something for you
//Functions are used to modularise code
//Functions are used to increase readability 
//Functions are used to use same code for multiple timess

//pass by value
//It just sends the copy of the value to function not original value is still
//there in main function
void doSomething(int num)
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