#include<iostream>
#include"task1.h"

using namespace std;

Distance::Distance()
{
    // i am a default noob
}

Distance::Distance(int f,int i)
{
    feet = f;
    inches = i;

    if(inches>12)
    {
        inches = inches/12;
        feet += inches;
    }
}

bool Distance::setFeet(int f)
{
    feet = f;

    return true;
}

bool Distance::setInches(int i)
{
    inches = i;

    return true;
}

int Distance::getFeet()const
{
    return feet;
}

int Distance::getInches()const
{
    return inches;
}

Distance Distance::operator+(const Distance &obj)
{
    //int new_feet,new_inches;

    Distance d1;

    d1.feet = this->feet + obj.feet;
    d1.inches = this->inches + obj.inches;

    cout<<"Addition Operator "<<endl;

    cout << this->feet << "  " << this->inches<<endl;
    cout << " + " << endl;
    cout << obj.feet << "  " << obj.inches <<endl;
    cout << " = " << endl;
    cout << d1.feet << "  " << d1.inches<< endl;

    return d1;
}

Distance Distance::operator-(const Distance &obj)
{
    Distance d1;

    d1.feet = this->feet - obj.feet;
    d1.inches = this->inches - obj.inches;

    cout<<"Subtraction operator "<<endl;

    cout << this->feet << "  " << this->inches<<endl;
    cout << " - " << endl;
    cout << obj.feet << "  " << obj.inches <<endl;
    cout << " = " << endl;
    cout << d1.feet << "  " << d1.inches<< endl;

    return d1;
}

Distance Distance::operator=(const Distance &obj)
{
    Distance d1;

    d1.feet=this->feet = obj.feet;
    d1.inches=this->inches = obj.inches;

    cout<<"Equal to operator "<<endl;
    
    cout << this->feet << "  " << this->inches<<endl;
    cout << " = " << endl;
    cout << obj.feet << "  " << obj.inches <<endl;
    cout << " = " << endl;
    cout << d1.feet << "  " << d1.inches<< endl;
    
    return d1;
}

int main()
{
    Distance d;

    d.setFeet(20);
    d.setInches(20);

    Distance l;

    l.setFeet(1);
    l.setInches(1);

    Distance f;
    Distance f2;
    //Distance f3;

    f = d+l;
    cout<<endl;

    f2 = d-l;
    cout<<endl;

    d=l;


    return 0;
}