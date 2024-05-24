#ifndef TASK3_H_H
#define TASK3_H_H

#include<iostream>

using namespace std;

class Complex
{
    private:
        double real;
        double imaginary;
    
    public:
        Complex();
        Complex(double r,double i);
        Complex(Complex &copy);

        void setReal(double r);
        double getReal();
        void setImaginary(double i);
        double getImaginary();

        friend Complex addComplex(Complex &c1,Complex &c2);
	    friend Complex subComplex(Complex &c1,Complex &c2);
        friend Complex mulComplex(Complex &c1,Complex &c2);
};


#endif