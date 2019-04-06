//Fig.4.34c fig.03_34c.cpp

#include <iostream>

using namespace std;

int main()
{
    int number = 1;
    int itemnumber ;
    int a;
    int factorial = 1 ;
    double ex = 1.0;
    double x=1.0;

    cout << "Number of items for input cumulative summation :" ;
    cin >> itemnumber;
    cout << "a is :";
    cin >> a;

    cout <<" ex = ";

    while ( number < itemnumber)
    {
        x*=a;
        factorial *= number;
        ex += x/number;
        number ++ ;
    }

    cout << ex <<endl;
}

