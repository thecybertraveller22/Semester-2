#ifndef COMPOSITION_H_
#define COMPOSITION_H_

class Car;

class Engine
{
    public:
        void start(Car& car);
        void stop(Car& car);
};

class Car
{
    private:
        Engine engine;
        int milaege;
        int petrol;
    public:
        Car();
        Car(int m,int p);
        int getpetrol();
        void start();
        void stop();
};

 
#endif