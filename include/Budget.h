#ifndef BUDGET_H
#define BUDGET_H
using namespace std;
#include<iostream>

class Budget
{
    public:
        Budget();
        virtual ~Budget();
        void increaseBudget(double amount);
    protected:
        int id;
        double value;

    private:
};

#endif // BUDGET_H
