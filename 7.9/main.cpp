#include <iostream>
#include <iomanip>
#include <array>

using namespace std;
int main()
{
    const size_t alphabetSize =6;
    const array<unsigned int ,alphabetSize>
    n ={'1','2','\n','3','4','\n','5','6'};
    for(size_t i=0; i<n.size();++i)
        n[i]=0;

    cout<< "Element" << setw(13) << "Value" <<endl;
    for(size_t j=o;j<n.size();++j)
        cout<< setw(7)<<j<<setw(13)<<n[j]<<endl;


}
