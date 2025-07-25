#include <bits/stdc++.h>
using namespace std;

/*
1. if age < 18
print -> not eligible for  job

2. if age >= 18  && age <=54
print -> eligible for  job

3. if age >= 18 && age <=57 
print -> eligible for  job but retirement soon

4. if age > 57
print -> retirement soon
*/
int main()
{   

    int age;
    cin >> age;
    cout << endl;

    //This is How You Write Multiple Conditions 
    if(age <= 18)
    {
        cout << "Not Eligible For Job" << endl;
    }
    else if (age >=18 && age <=54)
    {
        cout << "Eligible For Job" << endl;
    }
    else if(age>=18 && age<=57)
    {
         cout << "Eligible For Job But Retirement Soon" << endl;
    }
    else {
        cout << "Retirement time " << endl;
    }
    return 0;
}