// Fig.3.13 gig03_12 Account.h
using namespace std;


class Account
{
public:
    explicit  Account(int);
    void credit(int);
    void debit (int);
    int getBalance() ;

private:
    int balance;
};
