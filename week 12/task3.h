//#ifndef TASK3_H
//#define TASK3_H
//
//#include<string>
//
//using namespace std;
//
//class Computer
//{
//    private:
//        string companyname;
//        int price;
//    public:
//        Computer(string cn,int p);
//        void setcompany(string cn);
//        void setprice(int p);
//        string getcompany();
//        int getprice();
//        virtual void show();
//};
//
//class Desktop : public Computer
//{
//    private:
//        string color;
//        int monitorsize;
//        int processortype;
//    public:
//        Desktop(string ,int ,int );
//        void show();
//};
//
//class Laptop : public Computer
//{
//    private:
//        string color;
//        int size;
//        int weight;
//        int processortype;
//
//    public:
//        Laptop(string c,int s,int w,int pt);
//        void show();
//};
//
//
//#endif



#ifndef TASK3_H
#define TASK3_H

#include <iostream>
#include <string>

using namespace std;

class Computer
{
    string companyName;
    float price;
    public:
        Computer(string = "ASUS", float = 5000);
        virtual void show();
};
class Desktop: public Computer
{
    string color, processor;
    float size;
    public:
        Desktop(string = "Black", string = "Intel i7", float = 12.5);
        virtual void show();
};
class Laptop: public Desktop
{
    string color, processor;
    float size, weight;
    public:
        Laptop(string = "Gray", string = "AMD Ryzen 7700U", float = 10.1, float = 1.5);
        virtual void show();
};

#endif /*_I22_1668_LAB12_TASK3_H_*/
