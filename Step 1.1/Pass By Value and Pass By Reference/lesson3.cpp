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


// pass by reference

void doSomething(int arr[], int n) 
{
    arr[0] += 100;
    cout << "Value inside function: " << arr[0] << endl;
}

int main()
{
    int n = 5;
    int arr[n];
    for(int i = 0; i < n; i++) 
    {
        cin >> arr[i];
    }

    doSomething(arr, n);
    cout << "Value inside main: " << arr[0] << endl;

    return 0;
}