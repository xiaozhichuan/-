#include<iostream>// allows program to perform input and output

using std::cout ;// program uses cout
using std:: cin; // program uses cin
using std::endl; // program uses endl

//function main begins program execution

int main()

{
    int number1=0;
    int number2=0;
    int number3=0;
    int sum = 0;
    int average = 0;
    int product = 0;

    cout << "Input three different integers:";
    cin >> number1 >> number2 >> number3 ;

    sum = number1 + number2 + number3 ;
    cout << "Sum is " << sum <<endl;

    average = ( number1 + number2 + number3 ) / 3 ;
    cout << "Average is "<< average << endl;

    product = number1*number2*number3;
    cout << "Product is " << product << endl;

    if(number1< number2 && number1 < number3 )
        cout << "Smallest is " << number1 << endl;

    if(number2<number1 && number2 < number3 )
       cout << "Smallest is " <<  number2 << endl;

    if (number3<number1 && number3<number2)
        cout << "Smallest is " <<  number3 << endl;

    if(number1>number2 && number1> number3)
        cout << "Largest is " << number1 << endl;

    if(number2>number1 && number2>number3)
         cout << "Largest is " << number2 << endl;

    if(number3>number1 &&number3>number2)
         cout << "Largest is " << number3 << endl;
};// end function main
