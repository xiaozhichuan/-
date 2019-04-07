//Fig.5.5 fig_05_05.cpp
#include <iostream>

using namespace std;

int main()
{
    int a = 0;
    int sum = 0;
    int number =0;


    cout<<"Enter a :" ;
    cin >> a ;

    for(int i =0 ; i< a ;i++)


    {
       cin >> number;
       sum +=number;
    }
    cout<<" The sum is :"<< sum <<endl;

}
