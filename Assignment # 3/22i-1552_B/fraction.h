/*Syed Arham Ahmed , BS-CY-B , 22i-1552 , Assignment # 3*/
#ifndef FRACTION_H_H
#define FRACTION_H_H
#include<iostream>

using namespace std;

class Fraction
{
    private:
        int numerator;
        int denominator;

    public:
        Fraction();
        Fraction(int numer);
        Fraction(int numer,int denom);
        Fraction(const Fraction &copy);

        int getnumerator();
        int getdenominator();
        void displayfraction();

        Fraction operator+(const Fraction &other);
        Fraction operator-(const Fraction &other);
        Fraction operator*(const Fraction &other);
        Fraction operator/(const Fraction &other);
        Fraction operator+=(const Fraction &other);
        Fraction operator-=(const Fraction &other);
        Fraction operator*=(const Fraction &other);
        Fraction operator/=(const Fraction &other);
        Fraction operator<<(const Fraction &other);
        Fraction operator++(int);
        Fraction operator--(int);
        Fraction operator&(const Fraction &other);
        Fraction* operator->();
        // ->* confusion
        bool operator==(const Fraction &other);
        bool operator!=(const Fraction &other);
        bool operator<(const Fraction &other);
        bool operator>(const Fraction &other);
        bool operator<=(const Fraction &other);
        bool operator>=(const Fraction &other);
        bool operator&&(const Fraction &other);
        bool operator||(const Fraction &other);
        double operator()()const;
        
        // operator [] confusion

        

        friend ostream& operator<<(ostream& out, const Fraction& other);
        friend istream& operator>>(istream& is, Fraction& fraction);
};

#endif