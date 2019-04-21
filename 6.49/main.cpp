//fig.6.49.cpp
#include <iostream>
using namespace std;

double pie = 3.14159;
inline double circleArea( double r )
{
   return pie * r * r;
}

int main()
{
   double r;

   cout << "Enter the r: ";
   cin >> r;
   cout << "The area is :  " << circleArea( r ) << endl;
}
