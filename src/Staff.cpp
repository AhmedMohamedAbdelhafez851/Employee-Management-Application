#include "Staff.h"

Staff::Staff()
{
    //ctor
}

Staff::~Staff()
{
    //dtor
}
double Staff::calacPayroll()
{

    sum = sum + stafflist->set_payroll();
    return sum;
}
void Staff::addMember()
{
    char ch , c;
      long double r;
    cout << "Enter the type Member (V or E) : ";
    cin >> ch ;
    switch (ch)
    {
      case 'v' :
          stafflist = new Volunteer;
          stafflist ->Get_data();
            name_E = "Volunteer";

          break;
      case 'e' :
        cout << "Enter thr type Employee (H or C or S_E) : ";
        cin >> c;
        switch (c)
        {
        case 'c':
            stafflist = new CommissionEmployee;
            stafflist->Get_data();
            name_E = "CommissionEmployee";
            //calacPayroll();
            break;
        case 'h':
            stafflist = new HourlyEmployee;
            stafflist->Get_data();
            name_E = "HourlyEmployee";
            //calacPayroll();
            break;
        case 's':
            cout << "Salary or bouns (s / b) : ";
            cin >> c;
            switch (c)
                {
                case 's':
                      stafflist = new SalaryEmployee;
                      stafflist->Get_data();
                        name_E = "SalaryEmployee";
                      //cout << calacPayroll();
                    break;
                case 'b':
                      stafflist = new ExecutiveEmployee;
                      stafflist->Get_data();
                        name_E = "ExecutiveEmployee";
                     //cout << calacPayroll();
                      break;
                }
        }
        break;
    }

coun++;
}


void Staff::ShowAll()
{

    cout << "\nType Staff : " << name_E << endl;

    cout << "Name : " << stafflist->name << " ,Phone : "<<stafflist->phone << " ,Email : "<<stafflist->email << " ,id : " <<stafflist->employeeId <<endl;
}
