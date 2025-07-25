#include <bits/stdc++.h>
using namespace std;

//Lets create a maximum and minimum function

int maxx(int num1,int num2)
{
    if (num1 >= num2)
         return num1;
    else
        return num2; 
}

int minn(int num1,int num2)
{
    if (num1 <= num2)
         return num1;
    else
        return num2; 
}

int main()
{
    int num1,num2,result,minimum;
    cin >> num1 >>  num2;
   
   
    result = maxx(num1, num2);
    minimum = minn(num1, num2);
    cout << result << endl;
    cout << minimum  << endl;
    return 0;
}