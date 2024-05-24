#ifndef BINARY_H_
#define BINARY_H_
#include<string>

using namespace std;

class Phone
{
    private:
        int serial;
        char model[70];
        int battery_health;
        int price;
        int model_year;
    public:
        Phone();
        Phone(int ser,string mod,int battery_h,int p,int model_y);
        void set_model();
        string get_model();
        void set_serial();
        int get_serial();
        int get_battery_health();
        void set_battery_health();
        int get_price();
        void set_price();
        void set_model_year();
        int get_model_year();
        //**************************
        void add_mobile(Phone obj);
        void read(int s);
        void showinfo();
};




#endif