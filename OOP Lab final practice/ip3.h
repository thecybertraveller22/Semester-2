#ifndef IP3_H_
#define IP3_H_
#include<string>

using namespace std;

class Computer
{
    private:
        string company_name;
        int price;
    public:
        //Computer();
        Computer(string n = "ASUS",int p = 300000);
        void setname(string n);
        void setprice(int p);
        string getname();
        int getprice();
        virtual void show();
};

class Desktop : public Computer
{
    public:
        string color;
        int monitor_size;
        string processor;
        
        Desktop(string col = "White",string proc = "AMD Ryren 7700-U",int size = 15);
        void show();
};

class Laptop : public Computer
{
    public:
        string color;
        int size;
        int weight;
        string processor;

        Laptop(string col = "Silver",int s=12,int w=56,string proc="intel core i7");
        void show();
};

#endif