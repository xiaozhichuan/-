//Fig. 3.15: fig03_15.cpp
#include <iostream>
#include "Date.h"
using namespace std;

Date::Date( int a, int b, int c )
{
   setMonth( a );
   setDay( b );
   setYear(c);
}

void Date::setMonth( int a )
{
   month = a;

   if ( month < 1 )
      month = 1;

   if ( month > 12 )
      month = 1;
}

int Date::getMonth()
{
   return month;
}

void Date::setDay( int b )
{
   day = b;
}

int Date::getDay()
{
   return day;
}

void Date::setYear( int c )
{
   year = c;
}

int Date::getYear()
{
   return year;
}


void Date::displayDate()
{
   cout << month << "/" << day << "/" << year << endl;
}
