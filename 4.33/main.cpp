//Fig.4.33: fig.04_33.cpp
#include <iostream>

using namespace std;

int main()
{
    int a = 0;
    int b = 0;
    int c = 0;

    cout<<"a is:";
    cin>>a;
    cout<<"b is:";
    cin>>b;
    cout<<"c is:";
    cin>>c;


    if (a*a+b*b==c*c || a*a+c*c==b*b || b*b+c*c==a*a)
           cout<<"These three values represent a  right  triangle.";
       else
        cout<< "These three values do not represent a right triangle.";
}
