#include "SalaryEmployee.h"

SalaryEmployee::SalaryEmployee()
{
    //ctor
}

SalaryEmployee::~SalaryEmployee()
{
    //dtor
}
void SalaryEmployee::Get_data()
{
    Employee::Get_data();
    cout << "Enter the salary : \n";
    cin >> salary;
}

double SalaryEmployee::set_payroll()
{
    return salary;
}
