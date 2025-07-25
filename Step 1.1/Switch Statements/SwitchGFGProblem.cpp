//{ Driver Code Starts
#include<bits/stdc++.h>
using namespace std;


class Array
{
public:
    template <class T>
    static void input(vector<T> &A,int n)
    {
        for (int i = 0; i < n; i++)
        {
            scanf("%lf ",&A[i]);
        }
    }

    template <class T>
    static void print(vector<T> &A)
    {
        cout<<setprecision(3)<<fixed;
        for (int i = 0; i < A.size(); i++)
        {
            cout << A[i]<< " ";
        }
        cout << endl;
    }
};


// } Driver Code Ends


class Solution {
  public:
    double switchCase(int choice, vector<double> &arr) {
        // code here
        int l,b; //length and breadth
        double r,area =0; //
        const double PI = 3.14159265359;
        
       switch (choice) {
            case 1: {
                // choice is 1, so calculate the area of a circle
                double r = arr[0];  // radius
                area = PI * r * r;
                break;
            }
            case 2: {
                // choice is 2, so calculate the area of a rectangle
                double l = arr[0], b = arr[1];  // length and breadth
                area = l * b;
                break;
            }
            default: {
                area = 0;
                break;
            }
        }
        return area;
        
    }
};



//{ Driver Code Starts.

int main(){
    int t;
    scanf("%d ",&t);
    while(t--){
        
        int choice;
        scanf("%d",&choice);
        
        
        vector<double> arr(choice);
        Array::input(arr,choice);
        
        Solution obj;
        double res = obj.switchCase(choice, arr);
        // cout<<fixed<<endl;
        if(res == int(res)){
            cout<<int(res)<<endl;
            continue;
        }
        cout<<setprecision(2)<<fixed;
        // 
        // }else{
            cout<<res<<endl;
        // }
        
    }
}

// } Driver Code Ends