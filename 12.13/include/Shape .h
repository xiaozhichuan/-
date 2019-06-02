#ifndef SHAPE _H
#define SHAPE _H

#include <iostream>
using namespace std;

class Shape
{
class Shape {
   friend ostream & operator<<( ostream &, Shape & );
public:
   Shape( double = 0.0, double = 0.0 );
   double getCenterX() const;
   double getCenterY() const;
   virtual void print() const = 0;
protected:
   double xCenter;
   double yCenter;
};
#endif
