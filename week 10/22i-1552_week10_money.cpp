#include<iostream>
#include"money.h"

using namespace std;

Money::Money()
{
    dollar = 0;
    cents = 0;
}

Money::Money(int dollar,int cents)
{
    this->dollar = dollar;
    this->cents = cents;
    /*cout<<"dollar = "<<dollar<<endl;
    cout<<"cents = "<<cents<<endl;*/
}

Money::Money(const Money &copy)
{
    dollar=copy.dollar;
    cents=copy.cents;
}

Money Money::operator+(const Money &obj)
{
    Money m1(dollar,cents);
    

    m1.dollar= this->dollar + obj.dollar;
    m1.cents = this->cents + obj.cents;

    /*cout<<"dollar = "<<m1.dollar<<endl;
    cout<<"cents = "<<m1.cents<<endl;*/

    if(m1.cents>100)
    {
        m1.dollar += m1.cents / 100;
        m1.cents = m1.cents % 100; 
    }
    cout<<endl;
    cout<<"The amount after adding both objects = "<<m1.dollar<<"."<<m1.cents<<endl;
    cout<<endl;

    return m1;
}

Money Money::operator-(const Money &obj)
{
    //int new_dollar,new_cents;
    Money m1(dollar,cents);
    

    m1.dollar= this->dollar - obj.dollar;
    m1.cents = this->cents - obj.cents;

    /*cout<<"dollar = "<<m1.dollar<<endl;
    cout<<"cents = "<<m1.cents<<endl;*/

    if (m1.cents < 0) 
    {
        m1.dollar--;
        m1.cents += 100;
    }
    cout<<endl;
    cout<<"The amount after subtracting both objects = "<<m1.dollar<<"."<<m1.cents<<endl;
    cout<<endl;  
    return m1;
}

const Money Money::operator=(const Money &obj)
{
    Money m1(dollar,cents);

    m1.dollar = this->dollar;
    m1.cents = this->cents;

    m1.dollar+=obj.dollar;
    m1.cents+=obj.cents;

    /*cout<<"dollar = "<<m1.dollar<<endl;
    cout<<"cents = "<<m1.cents<<endl;*/

    if(m1.cents>100)
    {
        m1.dollar += m1.cents / 100;
        m1.cents = m1.cents % 100; 
    }
    cout<<endl;
    cout<<"The amount after adding both objects = "<<m1.dollar<<"."<<m1.cents<<endl;
    cout<<endl;

    return m1;
}

void Money::operator++(int)
{

    dollar++;
    cents++;

    cout<<"Money after increment is = "<<dollar<<"."<<cents<<endl;
}

void Money::operator--(int)
{

    dollar--;
    cents--;

    cout<<"Money after decrement is = "<<dollar<<"."<<cents<<endl;
}

Money Money::operator*=(const Money &right)
{
    dollar *= right.dollar;
    cents *=right.cents;

    cout<<"Using the *= operator =  "<<dollar<<"."<<cents<<endl;

    return Money(dollar,cents);
}

ostream& operator<<(ostream& os,Money &right)
{
    os << right.dollar <<"."<< right.cents;

    return os;
}

istream& operator>>(istream& in,Money &right)
{
    in>>right.dollar;
    in>>right.cents;

    return in;
}

bool Money::operator>(const Money &right)
{
    if(this->dollar>right.dollar)
    {
        if(this->cents>right.cents)
        {
            return true;
        }
        else
        {
            false;
        }
    }
}

bool Money::operator!=(const Money &right)
{
    if(this->dollar!=right.dollar)
    {
        if(this->cents!=right.cents)
        {
            return true;
        }
        else
        {
            false;
        }
    }
}

int main()
{

    Money m1(1,2);
    Money m2(2,4);
    Money m3 = m2+m1;
    Money m4= m2-m1;
    m2*=m1;
    m2=m1;

    

    m2++;
    m1--;
    Money m10;

    cin>>m10;
    cout<<m10<<endl;
    
    

    return 0;
}