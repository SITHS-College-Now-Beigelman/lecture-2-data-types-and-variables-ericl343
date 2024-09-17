// Eric Lin
// Lecture 2
// September 16th, 2024

#include <iostream>         // Useful
#include <string>           // Can add strings
using namespace std;

int main () 
{
    // My Variables
    int myInt = 3;          // Int
    float myFlo = 3.12;     // Float
    double myDou = 6.24;    // Double my Float
    char myCha = 'X';       // Char
    bool myBoo = false;     // Bool
    string myStr = "Sup";   // String

    // Display and Print
    cout << "int: " << myInt << "\n"; 
    cout << "float: " << myFlo << "\n";
    cout << "double: " << myDou << "\n";
    cout << "char: " << myCha << "\n";
    cout << "bool: " << myBoo << "\n";
    cout << "string: " << myStr << "\n";

    int feet;
    feet = 6;

    cout << feet << " feet (foot) = ";
    cout << feet / 3 << " yard (s) and ";
    cout << feet % 3 << " feet (foot)" << endl;     //Almost the end
    return 0;                                       //The End...
    /*
    int: 3
    float: 3.12
    double: 6.24
    char: X
    bool: 0
    string: Sup
    6 feet (foot) = 2 yard (s) and 0 feet (foot)
    */
}