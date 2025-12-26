#include <bits/stdc++.h>
using namespace std;

void print1(int n)
{
    for(int i=0; i<n; i++)
    {   
        //Space
        for(int j=0; j<n-i-1; j++)
        {
            cout << " ";
        }
        //Stars

        for(int j=0; j<2*i+1; j++)
        {
            cout << "*";
        }


        //Space
        for(int j=0; j<n-i-1; j++)
        {
            cout << " ";
        }

        cout << endl;
    }

     for(int i=0; i<n; i++)
    {   
        //Space
        for(int j=0; j<i; j++)
        {
            cout << " ";
        }
        //Stars

       
        for (int j = 0; j < 2*n-(2*i+1); j++) 
        {
                cout << "*";
        }


        //Space
        for(int j=0; j<i; j++)
        {
            cout << " ";
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