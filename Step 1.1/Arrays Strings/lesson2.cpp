#include <bits/stdc++.h>
using namespace std;

int main()
{
    //1-D Arrays
    int arr[5];
    cout << "Demonstration Of 1-D Arrays" << endl;
    arr[1] = 0;
    arr[2] = 3;
    arr[3] = 10;
    arr[4] = 20;

    //We Can also perform operation on arratys like add

    arr[0] = arr[0] + 10;
    cout << arr[0] << endl;
    cout << arr[1] << endl; 
    cout << arr[2] << endl;
    cout << arr[3] << endl;
    cout << arr[4] << endl;
    cout << arr[5] << endl; //Since we have not declared and initalised
    //so this last element would have garbage value

    return 0;
}
