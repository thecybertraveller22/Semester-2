/*Syed Arham Ahmed , BS-CY-B , 22i-1552 , Assignment # 3*/
#include<iostream>
#include"fraction.cpp"
#include"fraction.h"
#include<iomanip>
#include<cstring>

using namespace std;

int main()
{
    /*Fraction f1; //  0/1
    Fraction f2(3); //  3/1
    Fraction f3(4, 6); //2/3
    Fraction f4(f3); // copy of f3
    Fraction f5(1,2);
    Fraction f7(3,4);

    //Fraction f6=f7+=f5;

    cout<<endl;
    cout<<"The sum of ";
    f7.displayfraction();
    cout<<" and ";
    f5.displayfraction();
    cout<<" is = ";
    f6.displayfraction();
    cout<<endl;

    f1.displayfraction(); // Should output 0/1
    f2.displayfraction(); // Should output 3/1
    f3.displayfraction(); // Should output 2/3
    f4.displayfraction(); // Should output 2/3 as it is a copy of f3

    /*cout<<endl;
    cout<<"The sum of ";
    f3.displayfraction();
    cout<<" and ";
    f5.displayfraction();
    cout<<" is = ";
    f6.displayfraction();*/
    //cout<<endl;
    /*Fraction f1(3, 2);
    Fraction f2(1, 3);*/
    //f1 /= f2;
    //Fraction f3=f1*f2;
    //Fraction f3=f1<<f2;

    //f3.displayfraction(); // Output: 5/4


    //cout << "f1 = " << f1 << endl;
    //cout << "f2 = " << f2 << endl;

    Fraction a(1, 10);
    Fraction b(23, 4);

    //cout<<a()<<endl;

    //cin>>a;
    //a++;
    //a--;
    //a++;
    bool f= a&&b;

    cout<<f<<endl;
    //a--;

    // Test the displayfraction() function
    a.displayfraction();
    //b.displayfraction();
    //a++;
    

    // Test the << and >> operators
    /*cout << "Enter a fraction: ";
    cin >> a;
    cout << "The fraction you entered is: " << a << endl;*/

    // Test the == operator
    /*if (a == b) {
        cout << "The two fractions are equal." << endl;
    } else {
        cout << "The two fractions are not equal." << endl;
    }*/


    return 0;
}