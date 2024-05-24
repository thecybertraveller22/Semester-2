#ifndef MONEY_H_
#define MONEY_H_
#include <iostream>

using namespace std;

class Money
{
    private:
        int dollar;
        int cents;
    public:
        Money();
        //~Money();
        Money(int d,int c);
        Money operator+(const Money &obj);
        Money operator-(const Money &obj);
        Money(const Money &copy);
        const Money operator=(const Money &obj);
        void operator++(int);
        void operator--(int);
        Money operator*=(const Money &right);
        friend ostream& operator<<(ostream &os,Money& right); //ostream
        friend istream& operator>>(istream &in,Money& right); //istream
        bool operator!=(const Money& right);
        bool operator>(const Money& right);
};
#endif