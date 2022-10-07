#ifndef DEPARTMENT_H
#define DEPARTMENT_H
using namespace std;
#include<iostream>
#include<bits/stdc++.h>
#include<string>

class Department
{
    public:
        Department();
        virtual ~Department();
        void get_department();


    protected:
        string name_department;
        int id;

    private:
};

#endif // DEPARTMENT_H
