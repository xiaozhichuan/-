

#include <iostream>

using namespace std;

int main()
{
    int a;
    int sum = 0;


   cout << "Enter integers :" << endl;
   cin >> a ;

   for ( unsigned int count = 0;a != 9999; count++ )
   {
       sum += a ;
   }
     cin >> a ;
     cin >> count;
     cout << "\nThe average is: "<< static_cast< double > ( sum ) / count << endl;
}
