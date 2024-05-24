#ifndef CAA2_H
#define CAA2_H

#include <string>

using namespace std;

class Car
{
private:
    string brand;
    int year;

public:
    Car(string b, int y);

    friend void printCarInfo(Car c);
};

#endif
