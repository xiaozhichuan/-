//Fig.6.30: fig.06_30.cpp

#include<iostream>

#include<iomanip>

using namespace std;

double qualityPoints(double);

int main()
{
    int grade;

    cout  << " Enter a student's grade : ";
    cin >> grade;

    cout << "The student's quality points :";

    cout << qualityPoints(grade) << endl;

}

double qualityPoints(double grade)
{

    if(grade>=90&&grade<=100)
        return  4;
        else if (grade >=80&&grade<=90)
        return 3;
        else if (grade >=70&&grade<=80)
        return  2;
        else if (grade >=60&&grade<=70)
       return  1;
       else if(grade <60)
        return 0;
}

