//Fig.6.27: fig.06_27.cpp

#include <iostream>
#include <math.h>

using namespace std;

double minimum (double x,double y ,double z);

int main()
{
    double x;
    double y;
    double z;

    cout << "Enter the first number :";
    cin >> x;

    cout << "Enter the second number :";
    cin >> y;

    cout << "Enter the third number :";
    cin >> z;

    cout << minimum(x,y,z)<< " is min" ;
    cout<<endl;

}

double minimum (double x, double y ,double z)
{
    double d =1.0;
    d=min(x,y);
    d=min(d,z);
    return d;
}
