#include <iostream>
using namespace std;

void print1(int n)
{
    for(int i=1; i<=2*n-1; i++)
    {   
        int stars = i;  //We are saying print the row number by printing 1st half
        if(i > n) stars = 2 * n - i ; //If the row number exceeds than we need to break the symmetry
        for(int j=1; j<=stars; j++)
        {
            cout << "* " ;
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