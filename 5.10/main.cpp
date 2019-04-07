#include <iostream>

using namespace std;

int main()
{
    int factorial = 1 ;

   cout << " i ! is \n" ;

  for (int i =1; i <=5; i++)
   {
      factorial *= i;
       cout << i<<"\t" <<factorial<<"\n";
   }

   cout<<endl;
}
