#include"task3.h"
#include<iostream>

using namespace std;

Complex::Complex()
{
    real = 0;
    imaginary = 0;
}

Complex::Complex(double r,double i)
{
    this->real = r;
    this->imaginary = i;
}

void Complex::setReal(double r)
{
    real = r;
}

double Complex::getReal()
{
    return real;
}

void Complex::setImaginary(double i)
{
    imaginary = i;
}

double Complex::getImaginary()
{
    return imaginary;
}

Complex addComplex(Complex &c1, Complex &c2) 
{  
    Complex result;
    result.real = c1.real + c2.real;
    result.imaginary = c1.imaginary + c2.imaginary;

    return result;
}

Complex subComplex(Complex &c1, Complex &c2)
{
    Complex result;
    result.real = c1.real - c2.real;
    result.imaginary = c1.imaginary - c2.imaginary;

    return result;
}

Complex mulComplex(Complex &c1, Complex &c2)
{
    Complex result;

    result.real = (c1.real*c2.real) - (c1.imaginary*c2.imaginary);
    result.imaginary = (c1.real*c2.imaginary) + (c1.imaginary*c2.real);

    return result;
}

int main() 
{
    Complex c1(1, 2);
    Complex c2(3, 4);

    Complex c3; 
    c3 = addComplex(c1, c2);
    Complex c4;
    c4 = subComplex(c1, c2);
    Complex c5; 
    c5 = mulComplex(c1, c2);

    cout << "Addition: " << c3.getReal() << " + " << c3.getImaginary() << "i" << endl;
    cout << "Subtraction: " << c4.getReal() << " + " << c4.getImaginary() << "i" << endl;
    cout << "Multiplication: " << c5.getReal() << " + " << c5.getImaginary() << "i" << endl;

    return 0;
}