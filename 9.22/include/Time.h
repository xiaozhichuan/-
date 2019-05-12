#ifndef TIME_H
#define TIME_H

class Time
{
public:
   Time( int = 0, );
   void setTime( int, );
   void setSecond( int );
   int getSecond();

   void tick();
   void printUniversal();
   void printStandard();
private:
   int second;
};
