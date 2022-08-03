#include<iostream>
using namespace std;


class Employee
{
    int id;
    int salary;
    public:
        void setId(void)
        {
            salary = 122;
            cout<<"Enter the id of Employee: ";
            cin>>id;
        }

        void getId(void)
        {
            cout<<"Enter the id of Employee is "<<id<<endl;
        }
};


int main()
{
    // Employee zeon, rohan, shruti, lol;
    // zeon.setId();
    // zeon.getId();
    Employee fb[4];
    for (int i = 0; i < 4; i++)
    {
        fb[i].setId();
        fb[i].getId();
    }
    
    return 0;
}