#include<iostream>
#include<string>
#include<fstream>
#include<cstring>
#include"binary.h"

using namespace std;

Phone::Phone()
{

}

Phone::Phone(int ser,string mod,int battery_h,int p,int model_y)
{
    strcpy(model, mod.c_str());
    serial = ser;
    battery_health = battery_h;
    price = p;
    model_year = model_y;
}

void Phone::set_model()
{
    cout<<"Enter the model of this phone = ";
    cin>>model;
}

string Phone::get_model()
{
    return model;
}

void Phone::set_serial()
{
    cout<<"Enter the serial number of this device = ";
    cin>>serial;
}

int Phone::get_serial()
{
    return serial;
}

int Phone::get_battery_health()
{
    return battery_health;
}

void Phone::set_battery_health()
{
    cout<<"Enter the battery health for this phone = ";
    cin>>battery_health;
}

int Phone::get_price()
{
    return price;
}

void Phone::set_price()
{
    cout<<"Enter the price in rupees for this phone = ";
    cin>>price;
}

void Phone::set_model_year()
{
    cout<<"Enter the manufacturing year = ";
    cin>>model_year;
}

int Phone::get_model_year()
{
    return model_year;
}

/*void Phone::add_mobile(Phone obj)
{
    ofstream f("mobiledata.dat",ios::binary|ios::app);
    f.write((char*)&obj,sizeof(obj));
    f.close();
}




void Phone::read(int s)
{
    ifstream f("mobiledata.dat",ios::binary);

    if(!f)
    {
        cout<<"Error opening file"<<endl;
        return;
    }
    Phone obj;

    while(f.read((char*)&obj,sizeof(obj)))
    {
        if(obj.serial == s)
        {
            obj.showinfo();
        }
    }
    f.close();
    cout<<"Not found with serial number "<<s<<endl;
}

*/


void Phone::read(int s)
{
    ifstream f("mobiledata.dat",ios::binary);

    if(!f)
    {
        cout<<"Error opening file "<<endl;
        return;
    }
    Phone obj;

    while(f.read((char*)&obj,sizeof(obj)))
    {
        if(obj.serial == s)
        {
            obj.showinfo();
        }
    }
    f.close();
}

void Phone::add_mobile(Phone obj)
{
    ofstream f("mobiledata.dat",ios::binary|ios::app);
    f.write((char*)&obj,sizeof(obj));
    f.close();
}



void Phone::showinfo()
{
    cout<<"Serial Number      = "<<serial<<endl;
    cout<<"Phone Name         = "<<model<<endl;
    cout<<"Battery Health     = "<<battery_health<<endl;
    cout<<"Manufacturing Year = "<<model_year<<endl;
    cout<<"Price              = "<<price<<endl;
}

int main()
{
    //Phone(int ser,string mod,int battery_h,int p,int model_y);
    Phone p(1,"Iphone 14 Pro Max",93,485000,2022);
    /*Phone p2(2,"Iphone 11",73,90000,2019);
    Phone p3(3,"Samsung S-10 Plus",80,85000,2019);
    Phone p4(4,"Realme GT Master Edition",100,90000,2022);
    Phone p5(5,"Iphone 12 Pro",87,150000,2021);*/

    
    //p2.add_mobile(p2);
    //p3.add_mobile(p3);
    //p4.add_mobile(p4);
    //p5.add_mobile(p5);
    int num;
    cout<<"Enter serial number = ";
    cin>>num;
    p.read(num);
    //p.add_mobile(p);

    return 0;
}
