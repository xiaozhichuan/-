//Fig4.17: fig.04_17.cpp
#include <iostream>

using namespace std;

int main()
{
    int counter = 0 ;
    int number =0;
    int largest=0;

    cout << "Enter the first number :";
    cin >> largest;

    while(++ counter < 10)
    {
    cout << "Enter the number :" ;
    cin >> number;
    if (number >largest)
      largest = number ;
    }
    cout << "Largest is " << largest << endl;
}
