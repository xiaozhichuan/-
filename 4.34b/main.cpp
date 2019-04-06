//Fig.4.34b fig.03_34b.cpp
#include <iostream>

using namespace std;

int main()

{
    int number = 1;
    int itemnumber ;
    int factorial = 1 ;
    double e = 1.0;

    cout << "Number of items for input cumulative summation :" ;
    cin >> itemnumber;

    cout <<" e = ";

    while ( number < itemnumber)
    {
        factorial *= number;
        e += 1.0/number;
        number ++ ;
    }

    cout << e <<endl;
}
