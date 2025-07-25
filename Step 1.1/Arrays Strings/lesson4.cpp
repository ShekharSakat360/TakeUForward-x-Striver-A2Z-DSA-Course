#include <bits/stdc++.h>
using namespace std;
//Strings 
int main()
{
    string s = "Striver";
    //If I want to know the total size of string I can use
    //the size function
    int len,last;
    len =  s.size();
    cout << "Length is : " << len << endl;

    //IF I Want To Access the last Element of String
    //r  I will say
    last = s[len -1];
    cout << s[len -1] << endl;
    //Now print the string
    cout << s << endl;

    //If I want to modify last element r to z 
    //I can do the following

    s[len-1] = 'z';
    cout <<  s[len-1] << endl;
    //Now print the string
    cout << s << endl;


    return 0;
}