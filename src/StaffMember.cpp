#include "StaffMember.h"

StaffMember::StaffMember()
{
    //ctor
}

StaffMember::~StaffMember()
{
    //dtor
}
 void StaffMember :: Get_data()
{
    cout << "enter the name , phone , email and id : \n";
    cin >> this->name >> this->phone >> this->email >> this->employeeId;
    Department d;
    d.get_department();
}
void StaffMember::print_data()
{
     cout << "Name : " << name << " ,Phone : "<< phone << " ,Email : "<<email << " ,id : " <<employeeId <<endl;
}
double StaffMember::set_payroll()
{
    return 0;
}

