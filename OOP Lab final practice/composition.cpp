#include<iostream>
#include"composition.h"

using namespace std;

Car::Car()
{

}

Car::Car(int m,int p)
{
    milaege=m;
    petrol=p;
}

void Car::start()
{
    engine.start(*this); // Pass the reference to the Car object
}

void Car::stop()
{
    engine.stop(*this); // Pass the reference to the Car object
}

int Car::getpetrol()
{
    return petrol;
}

void Engine::start(Car& car)
{

    if(car.getpetrol()>1)
    {
        cout<<"Car has started"<<endl;
    }
    else
    {
        cout<<"Low fuel , cannot start"<<endl;
    } 
}

void Engine::stop(Car& car)
{
    if(car.getpetrol()<=1)
    {
        cout<<"Car turning off low fuel "<<endl;
    }
    else if(car.getpetrol()>1)
    {
        cout<<"Do u want to turn car off"<<endl;
        cout<<"Press 1 to stop , 0 to continue running"<<endl;
        int choice;
        cin>>choice;

        if(choice==1)
        {
            cout<<"Car turning off"<<endl;
        }
    }
}


int main()
{
    Car c(12000,1);

    c.start();
    c.stop();
    return 0;
}








