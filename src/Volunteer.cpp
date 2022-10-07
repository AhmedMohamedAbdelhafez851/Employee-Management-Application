#include "Volunteer.h"

Volunteer::Volunteer()
{
    //ctor
}

Volunteer::~Volunteer()
{
    //dtor
}
void Volunteer ::Get_data()
{
    StaffMember::Get_data();
    cout << "enter the amount : ";
    cin >>amount;

}
double Volunteer::set_payroll()
{
    return amount;
}
