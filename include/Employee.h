#ifndef EMPLOYEE_H
#define EMPLOYEE_H
using namespace std;
#include<iostream>
#include<string>
#include"StaffMember.h"

class Employee : public StaffMember
{
    public:
        string socialsecurityNumber;
        void Get_data();
          double set_payroll() = 0;
        Employee();
        virtual ~Employee();

    protected:


    private:
};

#endif // EMPLOYEE_H
