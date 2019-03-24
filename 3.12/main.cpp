//Fig. 3.12: fig03_12 test main.cpp
#include<iostream>
#include "Account.h"
using namespace std;

int main()
{
	Account  account1(-20);
	Account  account2 (100);

   cout << "account1 balance:" << " Yuan  " << account1.getBalance() << endl;
   cout << "account2 balance: "<< "Yuan  " << account2.getBalance() << endl;

   int withdrawalAmount;
   cout << "\nEnter withdrawal amount for account1: ";
   cin >> withdrawalAmount;
   cout <<  " from account1 balance\n";
   account1.debit( withdrawalAmount );
   cout << "\nEnter withdrawal amount for account2: ";
   cin >> withdrawalAmount;
   cout <<  " from account2 balance\n";
   account2.debit( withdrawalAmount );

   cout << "account1 balance: Yuan" << account1.getBalance() << endl;
   cout << "account2 balance: Yuan" << account2.getBalance() << endl;
}


