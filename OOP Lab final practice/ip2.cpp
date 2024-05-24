#include<iostream>
#include<string>
#include"ip2.h"

using namespace std;

Employee::Employee()
{

}

Employee::Employee(int id,string n)
{
    emp_id = id;
    name = n;
}

void Employee::setname(string n)
{
    name = n;
}

void Employee::setid(int id)
{
    emp_id = id;
}

string Employee::getname()
{
    return name;
}

int Employee::getid()
{
    return emp_id;
}

HourlyEmployee::HourlyEmployee(int id,string n,int hi)
{
    setid(id);
    setname(n);
    hourlyincome = hi;
}

int HourlyEmployee::calculate_the_hourly_income()
{
    cout<<"Enter the number of hours worked = ";
    int hours_worked;
    cin>>hours_worked;

    int income = hours_worked * hourlyincome;

    cout<<"Name   = "<<getname()<<endl;
    cout<<"ID     = "<<getid()<<endl;
    cout<<"Income = "<<income<<endl;
    return 0;
}

PermenentEmployee::PermenentEmployee(int id,string n,int hi)
{
    setid(id);
    setname(n);
    hourlyincome = hi;
}

int PermenentEmployee::calculate_the_income()
{
    int income = 240 * hourlyincome;
    cout<<"Name   = "<<getname()<<endl;
    cout<<"ID     = "<<getid()<<endl;
    cout<<"Income = "<<income<<endl;

    return 0;
}



int main()
{
    PermenentEmployee p1(1668,"Azan",150);
    HourlyEmployee h1(1552,"Arham",150);

    p1.calculate_the_income();
    cout<<endl;
    h1.calculate_the_hourly_income();


    return 0;
}