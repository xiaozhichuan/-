//Fig.4.32: fig.04_32.cpp

#include <iostream>

using namespace std;

int main()
{
    double a = 0;
    double b = 0;
    double c = 0;

    cout<<"a is:";
    cin>>a;
    cout<<"b is:";
    cin>>b;
    cout<<"c is:";
    cin>>c;


    if (a+b>c)
       {
           if(a+c>b);
           if(c+b>a);
           cout<<"These three values represent a triangle.";
       }
       else
        cout<< "These three values do not represent a triangle.";
}
