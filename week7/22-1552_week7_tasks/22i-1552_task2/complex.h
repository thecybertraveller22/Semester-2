#ifndef BLOCK_H_
#define BLOCK_H_

class Complex
{
    private:
        double real;
        double imaginary;
    
    public:
        Complex();
        Complex(double r,double i);
        Complex(const Complex & copy); // copy constructor

        void setreal(double r);
        double getreal();
        void setimaginary(double i);
        double getimaginary();

        Complex addcomplex(double r);
        Complex addcomplex(Complex & c1);
        Complex subcomplex(double r);
        Complex subcomplex(Complex & c1);
        Complex mulcomplex(double n);
        Complex mulcomplex(Complex &c1);



};


#endif