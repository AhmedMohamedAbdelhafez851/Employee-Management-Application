#include "Project.h"

Project::Project()
{
    //ctor
}

Project::~Project()
{
    //dtor
}
void Project::print()
{
    cout << "Enter the ID , Location and current cost : /n";
    cin >> ProjectId  >> location >> currentCost;
    manger->Get_data();
}
void Project::add_budget()
{
    double v;
    int p;
    cout << "Enter id_project : ";
    cin >> p;
    cout << "Budget Value :\n ";
    cin >> v;
    BudgeList.increaseBudget(v);
}



