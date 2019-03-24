//Fig. 3.15 fig.03_15 Date.cpp

#include <iostream>
#include "Date.h"
using namespace std;

int main()
{
   Date date(11,11,1999 );

   cout << "Month: " << date.getMonth() << endl;
   cout << "Day: " << date.getDay() << endl;
   cout << "Year: " << date.getYear() << endl;
   date.displayDate();
}
