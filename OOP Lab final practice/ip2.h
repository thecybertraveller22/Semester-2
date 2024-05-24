#ifndef IP2_H_
#define IP2_H_
#include<string>
using namespace std;

class Employee
{
    private:
        string name;
        int emp_id;

    public:
        Employee();
        Employee(int id,string n);
        void setname(string n);
        void setid(int id);
        string getname();
        int getid();
};

class HourlyEmployee : public Employee
{
    public:
        HourlyEmployee(int id,string n,int hi); //hi = hourlyincome
        int calculate_the_hourly_income(); // 1 hour = rs 150
        int hourlyincome;
};

class PermenentEmployee : public Employee
{
    public:
        PermenentEmployee(int id,string n,int hi);
        int calculate_the_income(); // 240 hours salary , 1 hour = rs 150
        int hourlyincome;
};


#endif