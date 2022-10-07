#ifndef PROJECT_H
#define PROJECT_H
#include"Employee.h"
#include<iostream>
#include"Budget.h"
using namespace std;

class Project
{
    public:
        Project();
        virtual ~Project();
        void print();
        void add_budget();
    protected:
        int ProjectId;
        string location;
        Employee *manger;
        double currentCost;
        Budget BudgeList;

    private:
};

#endif // PROJECT_H
