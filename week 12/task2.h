#ifndef TASK2_H
#define TASK2_H

#include<string>

using namespace std;

class Employee 
{
    private:
        string name;
        int empID;
    public:
        Employee();
        Employee(string n,int eID);

        void setName(string n);
        void setempID(int eID);
        string getName();
        int getID();

};

class HourlyEmployee : public Employee
{
    public:
        int hourlyIncome;

        HourlyEmployee(string n,int eID,int h_inc);
        int calculate_the_hourly_income();//One hour income is Rs. 150
};

class PermenantEmployee : public Employee
{
    public:
        int hourlyIncome;

        PermenantEmployee(string n,int eID,int h_inc);
        int calculate_the_income(); // fixed 240 hours pay rate one hours = 150 so 150*240

};

#endif