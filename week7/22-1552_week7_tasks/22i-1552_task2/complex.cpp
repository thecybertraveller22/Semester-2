#include"complex.h"
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

void Complex::setreal(double r)
{
    real = r;
}

double Complex::getreal()
{
    return real;
}

void Complex::setimaginary(double i)
{
    imaginary = i;
}

double Complex::getimaginary()
{
    return imaginary;
}

/*Complex Complex::addcomplex(double r)
{
    have to write code for this function
}*/

Complex Complex::addcomplex(Complex & copy) 
{  
    Complex result;
    result.real = this->real + copy.real;
    result.imaginary = this->imaginary + copy.imaginary;

    return result;
}

/*Complex Complex::subcomplex(double r)
{
    have to write code for this function
}*/

Complex Complex::subcomplex(Complex & copy)
{
    Complex result;
    result.real = this->real - copy.real;
    result.imaginary = this->imaginary - copy.imaginary;

    return result;
}

/*Complex mulcomplex(double n)
{
    have to write code for this function
}*/

/*Complex mulcomplex(Complex & c1)
{
    Complex result;

    result.real = this->real * c1.real;
    result.imaginary = this->imaginary * c1.imaginary;

    return result;
}*/

int main() 
{
    Complex copy(2, 3), c2(4, 5);

    Complex c3 = copy.addcomplex(c2);

    cout << "c1 = " << copy.getreal() << " + " << copy.getimaginary() << "i" << endl;
    cout << "c2 = " << c2.getreal() << " + " << c2.getimaginary() << "i" << endl;
    cout << "c3 = c1 + c2 = " << c3.getreal() << " + " << c3.getimaginary() << "i" << endl;

    cout<<endl;

    Complex c4 = copy.subcomplex(c2);

    cout << "c1 = " << copy.getreal() << " - " << copy.getimaginary() << "i" << endl;
    cout << "c2 = " << c2.getreal() << " - " << c2.getimaginary() << "i" << endl;
    cout << "c3 = c1 - c2 = " << c4.getreal() << " - " << c4.getimaginary() << "i" << endl;


    return 0;
}