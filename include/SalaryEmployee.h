#ifndef SALARYEMPLOYEE_H
#define SALARYEMPLOYEE_H
using namespace std;
#include<iostream>
#include<string>
#include"Employee.h"

class SalaryEmployee : public Employee
{
    public:
        SalaryEmployee();
        virtual ~SalaryEmployee();
        virtual void Get_data();
        virtual double set_payroll();

    protected:
        double salary;

    private:
};

#endif // SALARYEMPLOYEE_H
