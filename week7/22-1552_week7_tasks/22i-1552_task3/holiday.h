#ifndef HOLIDAY_H_
#define HOLIDAY_H_

#include<string>

using namespace std;


class Holiday
{
    private:
        string name;
        int day;
        string month;

    public:
        Holiday();
        Holiday(const string &n,int d,const string &m);
        Holiday(const Holiday & copy);

        void setname(const string &n);
        string getname();
        int getday();
        void setday(int d);
        string getmonth();
        void setmonth(const string &m);
};
bool insamemonth(Holiday &a,Holiday &b);
double avgdate(Holiday arr[],int size);


#endif