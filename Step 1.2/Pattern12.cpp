#include <iostream>
using namespace std;

void print1(int n)
{
       // Iterate for each row
        for(int i = 1; i <= n; i++) 
        {
            // Print first part of the numbers (increasing)
            for(int j = 1; j <= i; j++) 
            {
                cout << j << " ";
            }

            // Calculate the number of spaces in between
            int space = (2 * n) - (2*i);
            
            // Print spaces
            for(int j = 1; j <= space; j++) 
            {
                cout << " ";
            }

            // Print second part of the numbers (decreasing)
            for(int j = i; j >= 1; j--) 
            {
                cout << j << " ";
            }

        // Move to the next line after completing the row
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