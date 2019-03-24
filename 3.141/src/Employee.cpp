//Fig 3.14 employee.cpp

#include <iostream>
#include "Employee.h"
using namespace std;

Employee::Employee( string first, string family, int  salary)
{
   setFirstName( first );
   setFamilyName( family );
   setMonthlySalary( salary );
}

void Employee::setFirstName( string name )
{
   firstName = name;
}

string Employee::getFirstName()
{
   return firstName;
}

void Employee::setFamilyName( string name )
{
   familyName = name;
}

string Employee::getFamilyName()
{
   return familyName;
}

void Employee::setMonthlySalary( int salary )
{
   if ( salary > 0 )
      monthlySalary = salary;

   if ( salary <= 0 )
      monthlySalary = 0;
}

int Employee::getMonthlySalary()
{
   return monthlySalary;
}
