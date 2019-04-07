
//Fig.5.8 fig 05_08.cpp

#include <iostream>

using namespace std;

int main()
{
    int a;
    int number =0;
    int smallest;

    cout << "Enter integers :" ;
    cin >> a;
    cout << "Enter numbers:";
    cin >> number>> smallest;

    for (int i =2; i<=a;i++)
    {
     cin >> number;
     if(number < smallest)
        smallest =number;
    }
    cout <<"The smallest is : " <<smallest<<endl;


}
