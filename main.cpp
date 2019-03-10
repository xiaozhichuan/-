//Fig. 2.16: fig02_16.cpp
//Addition program that displays the sum ,the product,the difference and the quotient.
#include<iostream>// allows program to perform input and output

// function main begins program execution
int main()
{
    //variable declarations
    int number1 = 0; // first integer to add (initialized to 0)
    int number2 = 0; // second integer to add (initialized to 0)
    int sum =0; // sum of number1 and number2 (initialized to 0)
    int product= 0; // product of number1 multiply number2 (initialized to 0)
    int difference = 0; // difference of number1 subtract number2 (initialized to 0)
    int quotient = 0; // quotient of number1 divide number2 (initialized to 0)

    std::cout << "Enter first integer: "; // prompt user for data
    std::cin >> number1; // read first integer from user into number1

    std::cout << "Enter second integer: "; // prompt user for data
    std::cin  >> number2; // read second integer from user into number2

    sum = number1 + number2; // add the numbers; store result in sum
    product = number1* number2; // multiply the numbers; store result in product
    difference= number1 - number2; // subtract the numbers; store result in difference
    quotient = number1 / number2; // divide the numbers; store result in quotient

    std::cout << "Sum is " << sum << std::endl;  // display sum; end line
    std::cout << "Product is " << product << std::endl; //display product; end line
    std::cout << "difference is " << difference << std::endl; //display difference; end line
    std::cout << "quotient is " << quotient << std::endl; //display quotient ;end line

} // end function main
