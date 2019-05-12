#include <iostream>
#include <iomanip>
#include "Time.h"
using namespace std;

Time::Time( int hr, int min, int sec )
{
   setTime( hr, min, sec );
}

void Time::setTime( int s )
{

   setSecond( s );
}

void Time::setSecond( int s )
{
   second = ( s >= 0 && s < 60 ) ? s : 0;
}

int Time::getSecond()
{
   return second;
}
void Time::tick()
{
   setSecond( getSecond() + 1 );
   if ( getSecond() == 0 )
   {

   }
}
void Time::printUniversal()
{
   cout << setfill( '0' ) << setw( 2 ) << getSecond();
}
void Time::printStandard()
{
   cout <<
      << ":" << setw( 2 ) << getSecond() << ;
}
