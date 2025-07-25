#include <bits/stdc++.h>
using namespace std;

//Write a program that takes an age as input and predict
//whether the individual is an adult or not
int main()
{   
    cout << "Demonstration Of If Else Statement " << "\n" ;
    int age ;
    cin >> age;
    cout << endl;

    if(age>=18)
    {
        cout << "You're an adult " << endl;
    }
    else
    {
        cout << "You're not an adult" << endl;
    }

    return 0;
}