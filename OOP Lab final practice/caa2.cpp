#include "caa2.h"
#include <iostream>

using namespace std;

Car::Car(string b, int y)
{
    brand = b;
    year = y;
}

void printCarInfo(Car c)
{
    cout << "Brand: " << c.brand << endl;
    cout << "Year: " << c.year << endl;
}

int main()
{
    Car myCar("Kia Picanto", 2022);
    printCarInfo(myCar);

    return 0;
}
