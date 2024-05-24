/*Syed Arham Ahmed , 22i-1552 , BS_CY_B, Assignement # 2*/
#include<iostream>

using namespace std;

class Address
{
    public:
        int house_num;
        int street_num;
        int apartment_num;
        char *city;
        char *state;
        int postal_code;

        Address()
        {
            house_num = 0;
            street_num = 0;
            apartment_num = 0;
            city = new char[20];
            state = new char[20];
            postal_code = 0;
        }

        Address(int apartment_num)
        {
            this->apartment_num = apartment_num;
        }

        void print()
        {
            cout<<endl;
            cout<<endl;
            //cout<<"------------------------------"<<endl;
            cout<<house_num<<", "<<street_num;
            if(apartment_num!=0)
            {
                cout<<", "<<apartment_num<<endl;
            }
            else
            {
                cout<<endl;
            }
            cout<<city<<", "<<state<<", "<<postal_code<<endl;
        }

        bool compareTo(Address ad) 
        {
            return postal_code < ad.postal_code;
        }
};

int main()
{
    Address ad1;
    Address ad2;

    ad1.house_num = 125;
    ad1.street_num = 76;
    ad1.apartment_num = 1;
    ad1.city = "Islamabad";
    ad1.state = "Capital Territory";
    ad1.postal_code = 4400;

    ad2.house_num = 577;
    ad2.street_num = 12;
    //ad2.apartment_num = 0;
    ad2.city = "Atlanta";
    ad2.state = "Georgia";
    ad2.postal_code = 9100;
    
    ad1.print();
    cout<<endl;
    cout<<endl;
    cout<<"--------------------------------"<<endl;
    ad2.print();

    if (ad1.compareTo(ad2))
    {
        cout << "Address 1 has a smaller postal code than address 2" << endl;
    }
    else
    {
        cout << "Address 2 has a smaller postal code than address 1" << endl;
    }
    return 0;
}