#ifndef STAFF_H
#define STAFF_H
#include"CommissionEmployee.h"
#include"HourlyEmployee.h"
#include"SalaryEmployee.h"
#include"StaffMember.h"
#include"Employee.h"
#include"Volunteer.h"
#include"ExecutiveEmployee.h"

class Staff : StaffMember
{
    public:
        Staff();
        virtual ~Staff();
        double calacPayroll();
        void addMember();
        void dllMember();
        void ShowAll();
    protected:

    private:
        StaffMember *stafflist;
        string name_E;
        long double coun = 0;
        long sum = 0;
};

#endif // STAFF_H
