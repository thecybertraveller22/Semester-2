/*Syed Arham Ahmed , BS-CY-B , 22i-1552 , Assignment # 3*/
#include<iostream>
#include<math.h>
#include<algorithm>
#include"fraction.h"

using namespace std;

Fraction::Fraction()
{
    numerator=0;
    denominator=1;
}

Fraction::Fraction(int numer)
{
    /*this->*/numerator=numer;
    denominator=1;
}

Fraction::Fraction(int numer,int denom)
{
    int GCD;

    GCD=std::__gcd(numer,denom);

    numerator = numer/GCD;
    denominator = denom/GCD;

    if(denominator<0)
    {
        denominator = -denominator;
        numerator = -numerator;
    }

}

Fraction::Fraction(const Fraction &copy)
{
    numerator=copy.numerator;
    denominator=copy.denominator;
}

int Fraction::getdenominator()
{
    return denominator;
}

int Fraction::getnumerator()
{
    return numerator;
}

void Fraction::displayfraction()
{
    cout<<numerator<<"/"<<denominator<<endl;
}

Fraction Fraction::operator+(const Fraction &other)
{
    int new_numerator,new_denominator;  

    new_numerator = numerator*other.denominator + denominator*other.numerator;
      
    new_denominator = denominator*other.denominator;

    return Fraction(new_numerator,new_denominator);
}

Fraction Fraction::operator-(const Fraction &other)
{
    int new_numerator,new_denominator;  

    new_numerator = numerator*other.denominator - denominator*other.numerator;
      
    new_denominator = denominator*other.denominator;

    return Fraction(new_numerator,new_denominator);
}

Fraction Fraction::operator*(const Fraction &other)
{
    int new_numerator,new_denominator;  

    new_numerator = numerator*other.numerator;
      
    new_denominator = denominator*other.denominator;

    return Fraction(new_numerator,new_denominator);
}

Fraction Fraction::operator/(const Fraction &other)
{
    int new_numerator,new_denominator;  

    new_numerator = numerator*other.denominator;
      
    new_denominator = denominator*other.numerator;

    return Fraction(new_numerator,new_denominator);
}

Fraction Fraction::operator+=(const Fraction &other)
{
    int /*new_numerator,new_denominator,*/GCD;  

    numerator = numerator*other.denominator + denominator*other.numerator;
      
    denominator = denominator*other.denominator;

    GCD = std::__gcd(numerator,denominator);

    denominator = denominator/GCD;
    numerator = numerator/GCD;

    //return Fraction(new_numerator,new_denominator);
    return *this;
}

Fraction Fraction::operator-=(const Fraction &other)
{
    int /*new_numerator,new_denominator,*/GCD;  

    numerator = numerator*other.denominator - denominator*other.numerator;
      
    denominator = denominator*other.denominator;

    GCD = std::__gcd(numerator,denominator);

    denominator = denominator/GCD;
    numerator = numerator/GCD;

    //return Fraction(new_numerator,new_denominator);
    return *this;
}

Fraction Fraction::operator*=(const Fraction &other)
{
    int /*new_numerator,new_denominator,*/GCD;  

    numerator = numerator*other.numerator;
      
    denominator = denominator*other.denominator;

    GCD = std::__gcd(numerator,denominator);

    denominator = denominator/GCD;
    numerator = numerator/GCD;

    //return Fraction(new_numerator,new_denominator);
    return *this;
}

Fraction Fraction::operator/=(const Fraction &other)
{
    int /*new_numerator,new_denominator,*/GCD;  

    numerator = numerator*other.denominator;
      
    denominator = denominator*other.numerator;

    GCD = std::__gcd(numerator,denominator);

    denominator = denominator/GCD;
    numerator = numerator/GCD;

    //return Fraction(new_numerator,new_denominator);
    return *this;
}

ostream& operator<<(ostream& out,const Fraction &other)
{
    out << other.numerator <<"/"<< other.denominator;

    return out;
}

Fraction Fraction::operator<<(const Fraction &other)
{
    int num = numerator * other.denominator + other.numerator * denominator;
    int den = denominator * other.denominator;
    int GCD = std::__gcd(num, den);
    num /= GCD;
    den /= GCD;
    if(den < 0) {
        den = -den;
        num = -num;
    }
    return Fraction(num, den);
}


istream& operator>>(istream& is, Fraction& fraction) 
{
    cout<<"Enter numerator = ";
    is >> fraction.numerator;

    cout<<"Enter denominator = "; 
    is >> fraction.denominator;

    if (fraction.denominator == 0) 
    {
        cerr << "Error: Denominator cannot be zero!" << endl;
    }
    return is;
}

bool Fraction::operator==(const Fraction &other)
{
    if(numerator == other.numerator && denominator==other.denominator)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Fraction::operator!=(const Fraction &other)
{
    if(numerator == other.numerator && denominator==other.denominator)
    {
        return false;
    }
    else
    {
        return true;
    }
}

bool Fraction::operator<(const Fraction &other)
{
    if(numerator*other.denominator < denominator*other.numerator)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Fraction::operator>(const Fraction &other)
{
    if(numerator*other.denominator > denominator*other.numerator)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Fraction::operator<=(const Fraction &other)
{
    if(numerator*other.denominator <= denominator*other.numerator)
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Fraction::operator>=(const Fraction &other)
{
    if(numerator*other.denominator >= denominator*other.numerator)
    {
        return true;
    }
    else
    {
        return false;
    }
}

// operator [] confusion

Fraction Fraction::operator++(int)
{
    numerator += numerator;
    denominator += denominator;

    return Fraction(numerator,denominator);
}

Fraction Fraction::operator--(int)
{
    numerator -= numerator;
    denominator -= denominator;

    return Fraction(numerator,denominator);
}

double Fraction::operator()()const
{
    return static_cast<double>(numerator)/denominator;
}

bool Fraction::operator&&(const Fraction &other)
{
    if(numerator && other.numerator) // if non zero value then returns true else false 
    {
        return true;
    }
    else
    {
        return false;
    }
}

bool Fraction::operator||(const Fraction &other)
{
    if(numerator==0 || other.denominator==0 || denominator==0 || other.numerator==0) // if non zero value then returns true else false 
    {
        return false;
    }
    else
    {
        return true;
    }
}

Fraction Fraction::operator&(const Fraction &other)
{
    return numerator&other.numerator;
}

Fraction* Fraction::operator->()
{
    return this;
}
// ->* confusion

