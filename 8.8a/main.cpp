#include <iostream>

using namespace std;

int main()
{
    //a
    unsigned int values[SIZE]={2,4,6,8,10};
    //b
    unsigned int *vPtr;
    //c
   for(unsigned int i =0; i<values.size();++i)
    cout << values[i];

   //d
   *vPtr=&values;
    vPtr=values;

    //e
   for(unsigned int i=0;i<values.size();++i)
        cout<<*(vPtr+i);

    //f
     for(unsigned int i=0;i<values.size();++i)
        cout<<*(v+i);

     //g
     for(unsigned int i=0;i<values.size();++i)
    cout<<vPtr(i);

    //i
        values[3]=6;
}
