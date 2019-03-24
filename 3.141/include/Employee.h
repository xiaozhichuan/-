//Fig. 3.14 Emplpyee.h
#include <string>
using namespace std;

class Employee

{
public:
    explicit Employee(string , string , int);
    void setFirstName(string);
    string getFirstName();
    void setFamilyName(string);
    string getFamilyName();
    void setMonthlySalary (int);
    int getMonthlySalary() ;
private:
    string firstName;
    string familyName;
    int monthlySalary;
};
