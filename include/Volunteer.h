#ifndef VOLUNTEER_H
#define VOLUNTEER_H
using namespace std;
#include<iostream>
#include<string>
#include"StaffMember.h"

class Volunteer : public StaffMember
{
    public:
        Volunteer();
        virtual ~Volunteer();
        void Get_data();
          double set_payroll();
            double amount;
    protected:


    private:
};

#endif // VOLUNTEER_H
