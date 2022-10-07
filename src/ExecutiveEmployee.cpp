#include "ExecutiveEmployee.h"

ExecutiveEmployee::ExecutiveEmployee()
{
    //ctor
}

ExecutiveEmployee::~ExecutiveEmployee()
{
    //dtor
}

void ExecutiveEmployee ::Get_data()
{
    SalaryEmployee::Get_data();
    cout << "Enter the bonus : \n";
    cin >> bonus;
}

double ExecutiveEmployee::set_payroll()
{
    return salary + bonus;
}
