//Fig.5.9 fig_05_09.cpp
#include <iostream>

using namespace std;

int main()
{
    int product=1;
    int number=1;

    for(int i =1; i<=15;i+=2)
    {
        number=i;
        product *= number;
        number--;

        cout<<"The product of odd number from 1 to 15 is :" <<i<< "\t"<< product <<"\n";
    }
    cout<<endl;
}
