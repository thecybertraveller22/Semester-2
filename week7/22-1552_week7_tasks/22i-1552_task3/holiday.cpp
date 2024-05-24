#include "holiday.h"
#include<iostream>
#include<string>

using namespace std;

Holiday::Holiday()
{
    name = "";
    day = 0;
    month = "";
}

Holiday::Holiday(const string &n,int d,const string &m)
{
    this->name = n;
    this->month = m;
    this->day = d;
}

Holiday::Holiday(const Holiday &copy)
{
    name = copy.name;
    day = copy.day;
    month = copy.month;
}

void Holiday::setname(const string &n)
{
    if(n.length()<50)
    {
        name = n;
    }
}

void Holiday::setday(int d)
{
    if(d>=0)
    {
        day = d;
    }
}

int Holiday::getday()
{
    return day;
}

void Holiday::setmonth(const string &m)
{
    if(m.length()<=10)
    {
        month = m;
    }
}

string Holiday::getmonth()
{
    return month;
}

string Holiday::getname()
{
    return name;
}


bool insamemonth(Holiday &a, Holiday&b)
{
    return (a.getmonth() == b.getmonth());
}

double avgdate(Holiday arr[], int size)
{
    double sum = 0;

    for(int i=0;i<size;i++)
    {
        sum += arr[i].getday();
    }

    return sum/size;
}

int main()
{
    const int NUM_HOLIDAYS = 3;
    Holiday holidays[NUM_HOLIDAYS];

    // set attributes for each holiday
    holidays[0].setname("EID");
    holidays[0].setday(25);
    holidays[0].setmonth("April");
    

    holidays[1].setname("BAKRA EID");
    holidays[1].setday(25);
    holidays[1].setmonth("June");

    holidays[2].setname("Birthday");
    holidays[2].setday(30);
    holidays[2].setmonth("January");

    // calculate average day of the month for all holidays
    double avg = avgdate(holidays, NUM_HOLIDAYS);
    cout<<endl;
    cout << "The average day of the month for all holidays is: " << avg << endl;

    // check if two holidays are in the same month

    cout<<endl;

    if(insamemonth(holidays[0], holidays[1]))
    {
        cout << holidays[0].getname() << " and " << holidays[1].getname() << " are in the same month." << endl;
    }
    else
    {
        cout << holidays[0].getname() << " and " << holidays[1].getname() << " are not in the same month." << endl;
    }

    cout<<endl;

    return 0;
}
