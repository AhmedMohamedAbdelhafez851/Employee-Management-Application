#ifndef COMMISSIONEMPLOYEE_H
#define COMMISSIONEMPLOYEE_H
#include"Employee.h"
#include<iostream>
#include<string>
using namespace std;


class CommissionEmployee : public Employee
{
    public:
        CommissionEmployee();
        virtual ~CommissionEmployee();
        void Get_data();
        double set_payroll();

    protected:
        double target;

    private:
};

#endif // COMMISSIONEMPLOYEE_H
