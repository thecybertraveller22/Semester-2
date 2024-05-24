#include<iostream>
#include"task2.h"

using namespace std;

Employee::Employee()
{
    cout<<"Defautn employee called "<<endl;
}

Employee::Employee(string n,int eID)
{
    name = n;
    empID = eID;
}

void Employee::setName(string n)
{
    name = n;

    //return 0;
}

void Employee::setempID(int eID)
{
    empID = eID;
}


int Employee::getID()
{
    return empID;
}

string Employee::getName()
{
    return name;
} 

HourlyEmployee::HourlyEmployee(string n,int eID,int h_inc)
{
    setName(n);
    setempID(eID);
    hourlyIncome = h_inc;
}

int HourlyEmployee::calculate_the_hourly_income()
{
    cout<<"Enter hours worked = ";
    int hours_worked;
    cin>>hours_worked;

    int income = hours_worked*hourlyIncome;

    return income;
}

PermenantEmployee::PermenantEmployee(string n,int eID,int h_inc)
{
    setName(n);
    setempID(eID);
    hourlyIncome = h_inc;
}

int PermenantEmployee::calculate_the_income()
{
    int income = 240*hourlyIncome;

    return income;
}

int main()
{
    PermenantEmployee p1("Arham",1552,150);
    HourlyEmployee h1("Azan",1668,150);

    cout<<p1.calculate_the_income()<<endl;
    cout<<h1.calculate_the_hourly_income()<<endl;


    return 0;
}