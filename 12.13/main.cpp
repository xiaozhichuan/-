#include <iostream>
#include <vector>
#include "Shape.h"
#include "TwoDimensionalShape.h"
#include "ThreeDimensionalShape.h"
#include "Circle.h"
#include "Square.h"
#include "Sphere.h"
#include "Cube.h"
using namespace std;

int main()
{

   vector < Shape * > shapes( 4 );


   shapes[ 0 ] = new Circle( 4.4, 2, 8 );
   shapes[ 1 ] = new Square( 18, 3, 2 );
   shapes[ 2 ] = new Sphere( 5, 3.5, 4.7 );
   shapes[ 3 ] = new Cube( 1.4 );


   for ( int i = 0; i < 4; i++ )
   {
      cout << *shapes[ i ] << endl;

      TwoDimensionalShape *twoDimensionalShapePtr =
         dynamic_cast < TwoDimensionalShape * > ( shapes[ i ] );


      if ( twoDimensionalShapePtr != 0 )
         cout << "Area: " << twoDimensionalShapePtr->getArea() << endl;


      ThreeDimensionalShape *threeDimensionalShapePtr =
         dynamic_cast < ThreeDimensionalShape * > ( shapes[ i ] );


      if ( threeDimensionalShapePtr != 0 )
         cout << "Area: " << threeDimensionalShapePtr->getArea()
            << "\nVolume: " << threeDimensionalShapePtr->getVolume()
            << endl;

      cout << endl;
   }
}
