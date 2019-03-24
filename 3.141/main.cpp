// Exercise 3.14 Solution: ex03_14.cpp
// Create and manipulate two Employee objects.
#include <iostream>
#include "Employee.h"
using namespace std;

int main()
{
   Employee employee1( "Xinyi",  "Zhai", 10000);
   Employee employee2( "Arron",  "Yan", 15000);

   cout << "Employees yearly salaries: " << endl;

   int monthlySalary1 = employee1.getMonthlySalary();

   cout << employee1.getFirstName() << " " << employee1.getFamilyName()<< ": "  <<  " Yuan  " << monthlySalary1 * 12 << endl;

   int monthlySalary2 = employee2.getMonthlySalary();
   cout << employee2.getFirstName() << " " << employee2.getFamilyName()<< ": "  << "Yuan  "<< monthlySalary2 * 12 << endl;

   employee1.setMonthlySalary( monthlySalary1 + monthlySalary1 * 0.1 );
   employee2.setMonthlySalary( monthlySalary2 + monthlySalary2 * 0.1);

   cout << "\nEmployees yearly salaries after 10% raise: " << endl;

   monthlySalary1 = employee1.getMonthlySalary();
   cout << employee1.getFirstName() << " " << employee1.getFamilyName()<< ":" << " Yuan  " << monthlySalary1 * 12 << endl;

   monthlySalary2 = employee2.getMonthlySalary();
   cout << employee2.getFirstName() << " " << employee2.getFamilyName()<< ": " "Yuan   "<< monthlySalary2 * 12 << endl;
}
