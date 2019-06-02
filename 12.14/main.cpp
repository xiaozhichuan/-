#include <iostream>
#include <iomanip>
#include <vector>
#include "Package.h"
#include "TwoDayPackage.h"
#include "OvernightPackage.h"
using namespace std;

int main()
{
   vector < Package * > packages( 3 );

   packages[ 0 ] = new Package( "Ann LIN", "Angel", "Lily", "Lucky",
      11110, "Mary Smith", "7 Elm St", "New York", "NY", 22222, 8.5, .5 );
   packages[ 1 ] = new TwoDayPackage( "Lisa Klein", "  Brown",
      "Cindy", "MA", 33333, "Bob George", "21 Pine Rd", "Cambridge",
      "MA", 44444, 2.1, .65,3.4 );
   packages[ 2 ] = new OvernightPackage( " Lewis", "Os", "Boston",
      "MA", 55555, "Don Kelly", "Kern", "Denver", "CO", 66666,
      12.25, .7, .25 );

   double totalShippingCost = 0.0;

   cout << fixed << setprecision( 2 );


   for ( size_t i = 0; i < packages.size(); i++ )
   {
      cout << "Package " << i + 1 << "\n\nSender:\n"
         << packages[ i ]->getSenderName() << '\n'
         << packages[ i ]->getSenderAddress() << '\n'
         << packages[ i ]->getSenderCity() << ", "
         << packages[ i ]->getSenderState() << ' '
         << packages[ i ]->getSenderZIP();
      cout << "\n\nRecipient:\n" << packages[ i ]->getRecipientName()
         << '\n' << packages[ i ]->getRecipientAddress() << '\n'
         << packages[ i ]->getRecipientCity() << ", "
         << packages[ i ]->getRecipientState() << ' '
         << packages[ i ]->getRecipientZIP();

      double cost = packages[ i ]->calculateCost();
      cout << "\n\nCost: $" << cost << "\n\n";
      totalShippingCost += cost;
   }

   cout << "Total shipping cost: $" << totalShippingCost << endl;
}
