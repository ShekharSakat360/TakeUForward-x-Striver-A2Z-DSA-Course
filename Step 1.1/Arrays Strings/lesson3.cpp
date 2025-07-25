#include <bits/stdc++.h>
using namespace std;

int main()
{
    //2-D Arrays
    int arr[3][5];
    cout << "Demonstration Of 2-D Arrays" << endl;
    //1st Row
    arr[0][0] = 0;
    arr[0][1] = 3;
    arr[0][2] = 10;
    arr[0][3] = 20;
    arr[0][4] = 30;

    //2nd Row
    arr[1][0] = 0;
    arr[1][1] = 3;
    arr[1][2] = 10;
    arr[1][3] = 20;
    arr[1][4] = 30;

    cout << arr[0][0] << endl;
    cout << arr[1][1] << endl; 
    cout << arr[0][2] << endl;
    cout << arr[0][3] << endl;
    cout << arr[1][3] << endl;
    cout << arr[1][0] << endl; //Since we have not declared and initalised
    //so this last element would have garbage value

    return 0;
}
