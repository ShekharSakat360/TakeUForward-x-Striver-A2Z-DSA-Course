#include <iostream> 
using namespace std;
//once you write this using namespace std it says hey can you
//use the std for all function std:: cout std::cin std::endl
//Since after writing this it simply says can you use std for all
//cout,cin and endl the program automatically uses std for all 
// functions and we don't need to write anything std:: cout
//Instead of this std::cout std belongs to cout

//This is a library which allows us to 
//take input from user and to print something to the screen
//We Need to include this library in order to print something
//to screen

int main()
{
    //We  have to use cout to print something to the screen
    //cout exists under the std It says hey std 
    //can you give me cout in order to print something to the screen
    //We are saying  print Hey Striver
    //If you want to leave a line or split output in two lines
    //we need to use \n or endl but \n is faster 

    //The Problem is that we have to contiously write std::cout 
    //How many times can we write this this is very annoying
    //We will use the using namespace std It says hey can you use the
    //std for all function cout,cin and endl the program automatically
    //uses std for all functions

    cout << "Hey Striver" << "\n";
    cout << "Hey Striver" << endl;


    return 0;
}