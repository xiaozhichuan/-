//Fig.6.29: fig.06_29.cpp

#include <iostream>
#include <math.h>

using namespace std;

int celsius(int);
int fathrenheit(int);

int main()
{
    int C;
    for(int x=0;x<=100;x++)
    {
        C=x;
        cout << C << " C is  " << celsius(C) <<" F "<< "\n";
    }

    int F;
    for(int i=32;i<=212;i++)
    {
        F=i;
        cout << F << " F is " << fathrenheit(F) <<" C "<< "\n";
    }

}

int celsius(int C)
{
   int F;
   F=C*1.8+32;
   return F;
}
int fathrenheit(int F)
{
    int C;
    C=(F-32)/1.8;
    return C;
}
