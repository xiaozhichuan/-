//Fig.4.19: fig04_19.cpp
#include <iostream>

using namespace std;

int main()
{
    int counter = 0;
    int number =0;
    int largest = 0;
    int secondlargest = 0;

    cout << "Enter the first number :";
    cin >> largest ;
    cout <<  "Enter the second number : ";
    cin >> number;
    if(number > largest )
    {
        secondlargest =largest;
        largest = number;
    }
    else
        secondlargest = number;

    while(++ counter < 9)
    {
     cout << "Enter the number :" ;
    cin >> number;
    if (number >largest)
      {
           secondlargest =largest;
             largest = number;

      }
   else  if (number>secondlargest)
        secondlargest =number;
    }
    cout << " The Largest is : " << largest <<endl;
    cout << "The secondlargest is : " <<  secondlargest << endl;
}
