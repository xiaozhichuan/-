#include <iostream>
#include<iomanip>
#include<array>

using namespace std;

int main()
{
    const size_t arraySize=6;
    array<int,arraySize> a={1,2,3,4,5,6};
    array<int,arraySize> b={1,2,3,4,5,6};
    int sum;

    cout << "Number" << setw(13) << "Sum" <<endl;
    for(unsigned int roll =1; roll <=3600;++roll)

        ++arraySize;
    sum=a+b;
}


