#ifndef EXECUTIVEEMPLOYEE_H
#define EXECUTIVEEMPLOYEE_H
using namespace std;
#include<iostream>
#include<string>
#include"SalaryEmployee.h"

class ExecutiveEmployee : public SalaryEmployee
{
    public:
        ExecutiveEmployee();
        virtual ~ExecutiveEmployee();
        void Get_data();
        double set_payroll();

    protected:

    private:
        double bonus;
};

#endif // EXECUTIVEEMPLOYEE_H
