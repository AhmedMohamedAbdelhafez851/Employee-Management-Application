#include "HourlyEmployee.h"

HourlyEmployee::HourlyEmployee()
{
    //ctor
}

HourlyEmployee::~HourlyEmployee()
{
    //dtor
}

void HourlyEmployee::Get_data()
{
    Employee::Get_data();
    cout << "Enter the Rate / and Hours work : \n";
    cin >> rate >> hoursWork;
}

double HourlyEmployee::set_payroll()
{
    return rate * hoursWork;
}
