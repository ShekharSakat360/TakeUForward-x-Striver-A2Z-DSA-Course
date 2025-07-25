#include <bits/stdc++.h>
using namespace std;
/*
A School Has the Following  Rules
A. Below 25  - F
B. 25 to 44  - E
C. 45 to 49  - D
D. 50 to 59  - C
E. 60 to 79  - B
F. 80 to 100 - Af
*/

int main()
{
    int marks;
    cin >> marks;

    if (marks<25)
    {
        cout << "F" << endl;
    }
    if (marks>=25 && marks<=44)
    {
        cout << "E" << endl;
    }
    if (marks>=45 && marks<=49)
    {
        cout << "D" << endl;
    }
    if (marks>=50 && marks<=59)
    {
        cout << "C" << endl;
    }
    if (marks>=60 && marks<=79)
    {
        cout << "B" << endl;
    }
    if (marks>=80 && marks<=100)
    {
        cout << "A" << endl;
    }






    return 0;
}