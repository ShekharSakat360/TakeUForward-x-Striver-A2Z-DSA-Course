#include <bits/stdc++.h>
using namespace std;

void print1(int n)
{
    int space = 2 *(n -1);
    for(int i=1; i<=n; i++)
    {   
        //Number
        for(int j=1; j<=i; j++)
        {
            cout << j;
        }

        //Space

        for(int j=1; j<=space; j++)
        {
            cout << " ";
        }


        //Space
        for(int j=i; j>=1; j--)
        {
            cout << j;
        }
        space -=2;
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