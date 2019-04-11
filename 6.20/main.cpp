//Fig.6.20: fig.06_20.cpp

#include <iostream>
#include <math.h>

using namespace std;

bool iseven (int);

int main()
{
   int number;

    for(int i=1;i<=3;i++)
    {

    cout << "Enter the number:";
    cin >> number;

    if (iseven (number))

         cout << "True" <<"\n";
    else
        cout  << "False"  << "\n";

    }

    cout << endl;
}

bool iseven(int number)
{
    return !(number %2);
}
