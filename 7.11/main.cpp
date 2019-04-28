//Fig:07_11.cpp
#include <iostream>
#include <iomanip>
using namespace std;


int main()
{
   const int arraySize = 10;
   int counts[ arraySize ] = { 1,2,3,4,5,6,7,8,9,10 };

   cout << "items before modification : ";
   for (int count : counts)
    cout << count <<" ";

   for(int &countRef:counts)
    countRef =0;

    cout << "\nitems after modification : ";
    for (int count:counts)
        cout << count << " ";
        cout<<endl;
}
