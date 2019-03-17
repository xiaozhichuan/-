//Fig. 2.23£º fig_239.cpp
//Addition program that displays the sum ,the average, the product,the smallest and the largest of three numbers.
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
    int number4=0;
    int number5=0;

    cout << "Enter first integer:";
    cin >> number1;

    cout<< "Enter second integer:";
    cin >> number2;

    cout << "Enter third integer:";
    cin >> number3;

    cout << "Enter fourth integer:";
    cin >> number4;
    cout << "Enter fifth integer:";
    cin >>number5;


    if(number1< number2 && number1< number3 && number1<number4 &&number1<number5)
        cout << "Smallest is " << number1 << endl;

    if(number2<number1 &&number2<number3 && number2<number4 && number2<number5)
       cout << "Smallest is " <<  number2 << endl;

    if (number3<number1 && number3<number2 && number3<number4 && number3<number5)
        cout << "Smallest is " <<  number3 << endl;


    if (number4<number1 &&number4<number2 &&  number4<number3 && number4<number5)
        cout << "Smallest is " <<  number4 << endl;

    if (number5<number1 && number5<number2 && number5<number3 && number5<number4)
        cout << "Smallest is " <<  number5 << endl;

    if(number1>number2 &&number1>number3 && number1>number4 && number1>number5)
        cout << "Largest is " << number5 << endl;

    if(number2>number1 && number2>number3 && number2>number4 && number2>number5)
        cout << "Largest is " << number2 << endl;

    if(number3>number1 && number3>number2 && number3>number4 && number3>number5)
        cout << "Largest is " << number3 << endl;

    if(number4>number1 && number4>number2 && number4>number3 && number4>number5)
        cout << "Largest is " << number4 << endl;


    if(number5>number1 && number5>number2 &&number5>number3 && number5>number4)
        cout << "Largest is " << number5 << endl;

};// end function main
