#include "CommissionEmployee.h"

CommissionEmployee::CommissionEmployee()
{
    //ctor
}

CommissionEmployee::~CommissionEmployee()
{
    //dtor
}
void CommissionEmployee::Get_data()
{
    Employee::Get_data();
    cout << "Enter the target : \n";
    cin >> target;
}

double CommissionEmployee::set_payroll()
{
    return target * .05;
}
