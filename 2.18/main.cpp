//Fig. 2.18: fig02_18.cpp
//Comparing integers using if statements,relational operators
//and equality operators.
#include<iostream>// allows program to perform input and output

using std::cout; //program uses cout
using std::cin; //program uses cin
using std:: endl; //program uses endl
// function main begins program execution
int main()
{
    int number1 = 0; // first integer to compare (initialized to 0)
    int number2 = 0; // second integer to compare (initialized to 0)

    cout << "Enter two integers to compare: "; // prompt user for data
    cin >> number1 >> number2; // read two integers from user
    if (number1 > number2)
        cout<< number1 << "is large " << endl;
    if (number1 < number2)
        cout << number2 << "is large " << endl;
    if (number1 == number2)
        cout << "the numbers are equal" << endl;
} // end function main
