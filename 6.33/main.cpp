//fig.6.33.cpp

#include <iostream>
#include<cstdlib>
#include<ctime>

using namespace std;

int flip();


int main()
{
    int Head = 0;
    int Tail = 0;

     srand(time(0));

     for(int n=1;n<=100;n++)
     {
         if(flip()==0)
         {
             ++Tail;
             cout<< "Tail ";
         }
         else
         {
             ++Head;
             cout << "Head ";
         }
         if(n%10==0)
            cout << endl;
     }

     cout << "\nThe total number of Head: "<< Head << "\nThe total number of Tail: " <<Tail <<endl;
}
int flip()
{
    return rand()%2;
}
