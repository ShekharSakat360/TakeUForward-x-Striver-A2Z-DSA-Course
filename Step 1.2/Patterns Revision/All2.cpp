#include<iostream>
using namespace std;

void print1(int n)
{
    for(int i=1; i<n; i++)
    {
        for(int j=0; j<=i; j++)
        {
            cout << "* ";
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

}