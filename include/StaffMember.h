#ifndef STAFFMEMBER_H
#define STAFFMEMBER_H
using namespace std;
#include<iostream>
#include<string>
#include"Department.h"
class StaffMember
{
    public:
        int employeeId;
        string name , phone , email;
        StaffMember();
        virtual ~StaffMember();
       virtual void Get_data();
       virtual double set_payroll();
       void print_data();

    protected:


    private:
};

#endif // STAFFMEMBER_H
