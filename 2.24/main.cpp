//Fig. 2.24 fig_24cpp
//Addition program that adjust whether it is odd or even
#include<iostream>// allows program to perform input and output

using std::cout ;// program uses cout
using std:: cin; // program uses cin
using std::endl; // program uses endl

//function main begins program execution

int main()

{
    int number1=0;

    cout << "Enter first integer :";
    cin >> number1 ;

    if( number1 % 2 == 0 )
        cout << " number1 is odd " << endl;

    if( number1 %2 != 0)
       cout << "number1 is even " << endl;

};// end function main
