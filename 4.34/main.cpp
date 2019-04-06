

#include <iostream>

using namespace std;

int main()
{
    int number;
    int factorial = 1 ;

   cout << "Enter a nonnegative integer: " ;
   cin >> number;

   cout << number << "! is " ;

   while (number > 0)
   {
      factorial *= number;
       number--;
   }

   cout << factorial <<endl;
}
