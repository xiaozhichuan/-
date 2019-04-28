#include <iostream>
#include <iomanip>
#include <array>

using namespace std;
int main()
{

    array <int,100> temperatures;
    int total=0;
    for(size_t i=0; i<temperatures.size(); ++i)

    total += temperatures[i];

    cout << "Total of array elements: " <<total <<endl;
}
