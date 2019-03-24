//Fig.3.12 fig.03_14.Account.cpp
#include<iostream>
#include "Account.h"

using namespace std;

Account::Account(int  initialbalance ) //Verify the validity of the initial balance.
{
   if ( initialbalance >0 )
      balance = initialbalance;

    if (initialbalance <0)
    {
         balance=0;
    cout << "Initial balance is invalid !\n" << endl;
    }

};
void Account::credit(int  amount)
{
     balance = balance + amount;
};

void Account::debit( int amount )
{
   if ( amount > balance )
    balance = balance;
      cout << "Debit amount exceeded account balance.\n" << endl;

   if ( amount <= balance )
      balance = balance - amount;
}

int Account::getBalance()
{
   return balance;
}


