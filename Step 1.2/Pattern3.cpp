#include <iostream>
using namespace std;

void print1(int n)
{
    for(int i=1; i<=2*n-1; i++) //9 Rows
    {
        //We need to print row number
        int star  =i; 
        if (i>n) star = 2 * n - i; //For not having Symmetry
        for(int j=1; j<=star; j++) //Here we are printing as according to symmetrt
        {
            cout << "* ";
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
