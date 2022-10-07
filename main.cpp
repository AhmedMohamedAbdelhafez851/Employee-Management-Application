#include <iostream>
#include"Staff.h"
#include "Project.h"
using namespace std;

int main()
{
    system("color 75");
    int ch_all;
    cout << "1.Department\n2. Staff\n3. Project\n";
    cin >> ch_all;




    if(ch_all = 2)
    {

    int x;
    cout << "count staff you want to use : ";
    cin >> x;
   Staff s[x];
   char v;
    cout << "chioce : \n1. Add New Members\n2. Print All Members\n3. Calculate Payroll\n4. Delete Member \n";
    cin >> v;
    while(v != '0')
    {

    if(v == '1')
    {
      for(int c =0 ;c < x ;c++)
        {
            s[c].addMember();
        }
    }
    else if (v == '2')
    {
        for(int c =0 ;c <x ;c++)
        {
            s[c].ShowAll();
        }
    }
   else if (v == '3')
    {
      long sum = 0;
        for(int c =0 ;c <x ;c++)
        {
           sum += s[c].calacPayroll();
        }
        cout <<"\n PayRoll : " << sum << endl;
    }
        cout << "chioce : \n1. Add New Members\n2. Print All Members\n3. Calculate Payroll\n4. Delete Member \n";
       cin >> v;
    }
    }

    else if(ch_all == 3)
    {
        Project p;
        char l;
        cout << "1. Add New Project\n2. Print All Projects\n3. Add Budget to Existing Project\n";
        cin >>l;
        switch(l)
        {
        case '1':
            p.print();
            break;
        case '2':
           p.add_budget();
            break;
        }

    }



    return 0;
}
