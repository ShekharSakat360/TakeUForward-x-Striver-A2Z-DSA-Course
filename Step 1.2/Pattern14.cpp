#include <iostream>
using namespace std;

void print1(int n)
{
     for(int i=0; i<n; i++)
    {
        for(int j=0; j<=i; j++)
        {  
            char ch = 'A' + j;
            cout << ch  << " ";
        }

        cout << endl;

    }     
  

    /*

     // Loop through rows
    for(int i = 1; i <= n; i++) {
        // Loop to print letters in each row
        for(char ch = 'A'; ch <='A'+ i; ch++) {
            cout << ch << " ";
        }
        
        // Move to the next line after each row
        cout << endl;
    }
    */
    
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