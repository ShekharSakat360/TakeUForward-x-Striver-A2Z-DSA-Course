#include <iostream>
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

        //Star
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
}

int main()
{
    int n,t;
    cin >> t;
    while(t--)
    {   
        cin >> n;
        print1(n);
    }
    return 0;
}