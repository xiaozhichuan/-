//Fig:07_11.cpp
#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
   const int arraySize = 15;
   int bounts[ arraySize ] = { 1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};

   cout << "items before modification : ";
   for (int bount : bounts)
    cout << bount <<" ";

   for(int &bountRef:bounts)
    bountRef = (bountRef+1);

    cout << "\nitems after modification : ";
    for (int bount:bounts)
        cout << bount << " ";
        cout<<endl;
}
