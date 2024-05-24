/*Syed Arham Ahmed , 22i-1552 , BS_CY_B, Assignement # 2*/
#include<iostream>
#include<string.h>

using namespace std;

class Car
{
    public:
        float fuel_level;
        float average; // in km/l

    // Constructor with average passed as parameter
    Car(float average)
    {
        this->average = average;
        fuel_level = 0;
    }

    void drive(float distance)
    {
        fuel_level = fuel_level - (distance/average); // reducing fuel level 
    }

    void tank(float petrol_amount)
    {
        fuel_level = fuel_level + petrol_amount; // adding fuel
    }

    float getFuelLevel()
    {
        return fuel_level; // returns current fuel level
    }

};

int main()
{
    Car myBeemer(29);
    cout<<"Current fuel = "<<myBeemer.getFuelLevel()<<endl; // initial fuel
    myBeemer.tank(20);
    cout<<"Added fuel   = "<<myBeemer.getFuelLevel()<<endl; // fuel added
    myBeemer.drive(100);
    cout<<"Fuel left    = "<< myBeemer.getFuelLevel()<<endl; // fuel level

    return 0;
}