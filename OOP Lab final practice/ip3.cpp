#include<iostream>
#include<string>
#include"ip3.h"

using namespace std;


Computer::Computer(string n,int p)
{
    company_name = n;
    price = p;
}

void Computer::setname(string n)
{
    company_name = n;
}

void Computer::setprice(int p)
{
    price = p;
}

string Computer::getname()
{
    return company_name;
}

int Computer::getprice()
{
    return price;
}

void Computer::show()
{
    cout<<"Company name = "<<company_name<<endl;
    cout<<"Price        = "<<price<<endl;
}

Desktop::Desktop(string col,string proc,int size)
{
    color = col;
    processor = proc;
    monitor_size = size;
}

void Desktop::show()
{
    cout<<"Color         = "<<color<<endl;
    cout<<"Processor     = "<<processor<<endl;
    cout<<"Monitor Size  = "<<monitor_size<<endl;
}

Laptop::Laptop(string col,int s,int w,string proc)
{
    color = col;
    size = s;
    weight = w;
    processor = proc;
}

void Laptop::show()
{
    cout<<"Color         = "<<color<<endl;
    cout<<"Processor     = "<<processor<<endl;
    cout<<"Size          = "<<size<<endl;
    cout<<"Weight        = "<<weight<<endl;
}


int main()
{
    Computer *c1[3];
    c1[0] = new Computer;
    c1[1] = new Desktop;
    c1[2] = new Laptop;

    for(int i=0;i<3;i++)
    {
        c1[i]->show();
        cout<<endl;
        cout<<endl;
    }
    return 0;
}