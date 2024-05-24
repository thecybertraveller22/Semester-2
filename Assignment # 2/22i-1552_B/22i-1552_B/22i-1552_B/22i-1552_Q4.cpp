/*Syed Arham Ahmed , 22i-1552 , BS_CY_B, Assignement # 2*/
#include<iostream>
#include<string.h>

using namespace std;

class Employee2
{
    public:
        char *name;
        float hourly_wage;
        float worked_hours;
        float extra_hours;

    Employee2(const char *name , float hourly_wage , float worked_hours , float extra_hours)
    {
        size_t length = strlen(name);
        this->name = new char[length+1];

        for(size_t i=0;i<length;i++)
        {
            this->name[i] = name[i];
        }

        this->name[length] = '\0';

        this->hourly_wage = hourly_wage;
        this->worked_hours = worked_hours;
        this->extra_hours = extra_hours;
    }

    float wageCalculator()
    {
       float total_pay,regular_pay,overtime_pay;

       regular_pay = hourly_wage * worked_hours;
       overtime_pay = extra_hours * hourly_wage * 1.5;

       total_pay = regular_pay + overtime_pay;

       cout<<endl;
       cout<<endl;

       cout<<"Payment details for   = "<<name<<endl;
       cout<<"Hours worked          = "<<worked_hours<<endl;
       cout<<"Wage per hour         = "<<hourly_wage<<endl;

       if(extra_hours>0)
       {
            cout<<"Overtime hours worked  = "<<extra_hours<<endl;
            cout<<"Wage per hour overtime = "<<hourly_wage*1.5<<endl;
       }   
       cout<<"Total Payment         = "<<total_pay<<endl;

       return total_pay;     
    }
};

int main()
{
    char name[30];
    float hourly_wage=0,worked_hours=0,extra_hours=0;

    cout<<"Enter employee name = ";
    cin.getline(name,30);

    cout<<"Enter the hourly wage = ";
    cin>>hourly_wage;

    cout<<"Enter the hours worked = ";
    cin>>worked_hours;

    if(worked_hours>40)
    {
        extra_hours = worked_hours - 40;
    }
    else
    {
        extra_hours = 0;
    }

    Employee2 employee2(name,hourly_wage,worked_hours,extra_hours);
    employee2.wageCalculator();

    
    /*cout << "Hours worked  = " << worked_hours << endl;
    cout << "Hourly wage   = " << hourly_wage << endl;
    cout << "Total payment = " << total_payment << endl;*/

    return 0;
}