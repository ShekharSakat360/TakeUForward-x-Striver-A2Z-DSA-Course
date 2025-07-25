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

        //Characters

        char ch ='A';
        int breakpoint = (2 * i + 1)  /2 ; //Middle Of Symmetry

        for(int j=1; j<=2*i+1; j++)
        {
            cout << ch ;
            if (j<=breakpoint) 
                ch++;
            else
                ch--; //Decrease 
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