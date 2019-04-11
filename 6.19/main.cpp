//Fig.6.19: fig.06_19.cpp

#include <iostream>
#include <math.h>

using namespace std;

double hypotenuse (double, double);

int main()
{
    double side1 ;
    double side2;

    for(int i=1;i<=3;i++)
    {

    cout << "Enter the side1: ";
    cin >> side1 ;

    cout << "Enter the side2: " ;
    cin >> side2;

    cout << "The side3 is :" <<  hypotenuse(side1, side2 )<<endl;

    }

}

double hypotenuse(double a ,double b)
{

    double d=1;
    d = sqrt(a*a+b*b);
    return d;
}


