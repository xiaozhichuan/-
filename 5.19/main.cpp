//Fig.5.19 fig.05_19.cpp

#include <iostream>
#include <iomanip>

using namespace std;

int main()
{
    long double pi = 0.0;
    long double a = 1.0;
    long double number = 1000;

   cout<< fixed <<setprecision(8);
   cout << "Number set at: " << number << "\n\nterm\t\tpi\n";


   for ( long loop = 1; loop <= number; loop++ )
   {
      if ( loop % 2 != 0 )
         pi += 4.0 / a;
      else
         pi -= 4.0 / a;

      cout << loop << "\t\t" << pi<< '\n';

      a += 2.0;
   }

   cout << endl;
}
