//Fig.6.18: fig.06_18.cpp

#include <iostream>

using namespace std;

int integerPower(int, int);

int main()
{
    int base ;
    int exponent;


    cout << "Enter the base: ";
    cin >> base;

    cout << "Enter the exponent: " ;
    cin >> exponent;

    cout <<"The product is :" << integerPower(base,exponent) <<endl;

}

int integerPower(int a ,int b)
{
    int product = 1;


    for (int i = 1; i <= b ;i++)
    {
          product *= a;
    }

    return product;
}
