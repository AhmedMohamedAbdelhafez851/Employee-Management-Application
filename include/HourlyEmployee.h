#ifndef HOURLYEMPLOYEE_H
#define HOURLYEMPLOYEE_H
#include"Employee.h"
#include<iostream>
#include<string>

class HourlyEmployee : public Employee
{
    public:
        HourlyEmployee();
        virtual ~HourlyEmployee();
        void Get_data();
        double set_payroll();
        void addHours(double morehours = 1);
    protected:
        double rate , hoursWork;

    private:
};

#endif // HOURLYEMPLOYEE_H
