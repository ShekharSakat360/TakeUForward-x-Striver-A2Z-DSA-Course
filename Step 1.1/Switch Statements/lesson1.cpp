#include <bits/stdc++.h>
using namespace std;

/*
Take Day no and print the corressponding day
for 1 print Monday
for 2 print Tuesday
and so on print  7 for Monday
*/
int main()
{

    int day;
    cin >> day;

    switch(day)
    {
        case 1 : cout << "Monday" << endl;

        case 2 : cout << "Tuesday" << endl;

        case 3 : cout << "Wednesday" << endl;

        case 4 : cout << "Thursday" << endl;

        case 5 : cout << "Friday" << endl;

        case 6 : cout << "Saturday" << endl;

        case 7 : cout << "Sunday" << endl;
    }
    return 0;
}