#include "Employee.h"

Employee::Employee()
{
    //ctor
}

Employee::~Employee()
{
    //dtor
}
void Employee ::Get_data()
{
    StaffMember::Get_data();
    cout << "enter the security_Number : ";
    cin >> this->socialsecurityNumber;

}
