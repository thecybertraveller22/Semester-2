#include<iostream>
#include<vector>

using namespace std;

class Wheel 
{
public:
  void rotate() {cout<<"rotate"<<endl; /* implementation */ }
};

class Car 
{
public:
  void addWheel(Wheel wheel) { m_wheels.push_back(wheel); }
  void removeWheel(Wheel wheel) { cout<<"remove"<<endl;/* implementation */ }

  void drive() {
    for (auto& wheel : m_wheels) {
      wheel.rotate();
    }
  }

private:
  vector<Wheel> m_wheels;
};



int main()
{
    // Create some Wheel objects
    Wheel frontLeft, frontRight, rearLeft, rearRight;

    // Create a Car object and add the Wheels to it
    Car car;
    car.addWheel(frontLeft);
    car.addWheel(frontRight);
    car.addWheel(rearLeft);
    car.addWheel(rearRight);

    // Drive the car
    car.drive();

    // Remove a Wheel from the car
    car.removeWheel(frontRight);

    return 0;
}
