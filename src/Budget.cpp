#include "Budget.h"

Budget::Budget()
{
    //ctor
}

Budget::~Budget()
{
    //dtor
}

void Budget::increaseBudget(double a)
{
    cout << "Enter the project_id : \n";
    cin >> id ;
    cout << "Enter the Budget adds value: \n";
    int aa;
    cin >> aa;
    value = aa + a;
}
