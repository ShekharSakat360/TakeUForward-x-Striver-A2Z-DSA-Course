#include <iostream>
using namespace std;

void UpperHalf(int n) {
    for (int i = 0; i < n; i++) 
    {
        for (int j = 0; j <= i; j++) 
        {
            cout << "* "; // Removed extra spaces for better formatting
        }
        cout << endl;
    }
}

void LowerHalf(int n) 
{
    for (int i = 0; i < n; i++) {
        for (int j = n-1; j > i; j--) {
            cout << "* "; // Removed extra spaces for better formatting
        }
        cout << endl;
    }
}

void wholeTriangle(int n) {
    UpperHalf(n);
    LowerHalf(n);
}

int main() {
    int n, t;
    cin >> t; // Read number of test cases
    while (t--) {   
        cin >> n; // Read the size of the triangle
        wholeTriangle(n);
        cout << endl; // Add an empty line between test cases
    }
    return 0;
}