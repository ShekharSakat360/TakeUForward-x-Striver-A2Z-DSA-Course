#include <bits/stdc++.h>
using namespace std;

void print1(int n)
{
    int number = 1;
    for(int i=1; i<=n; i++)
    {   
        //Number
        for(int j=1; j<=i; j++)
        {
            cout << number << " ";
            number = number + 1;
        }

        cout << endl;
    }
}
int main()
{
    int t;
    cin >> t;
    
    while(t--)
    {
        int n;
        cin >> n;

        print1(n);
    }
    return 0;
}