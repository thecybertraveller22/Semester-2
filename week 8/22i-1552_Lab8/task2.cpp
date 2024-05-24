#include"task2.h"
#include<iostream>

using namespace std;

Facebook::Facebook()
{

}
/*Facebook::Facebook(string n,string e,char g, char* num)
{
    email=e;
    gender=g;
    name=n;
    number=num;

    for(int i=0;i<12;i++)
    {
        number[i]=num[i];
    }
}*/

Facebook::Facebook(string n,string e,char g, int num)
{
    email=e;
    gender=g;
    name=n;
    number=num;
}

void Facebook::setname(string n)
{
    name = n;
}

/*void Facebook::setnumber(char* num)
{

    for(int i=0;i<12;i++)
    {
        number[i]=num[i];
    }
}*/

void Facebook::setnumber(int num)
{
    number=num;
}

void Facebook::setemail(string e)
{
    email = e;
}

void Facebook::setgender(char g)
{
    gender = g;
}

string Facebook::getname()
{
    return name;
}

string Facebook::getemail()
{
    return email;
}

char Facebook::getgender()
{
    return gender;
}

/*char* Facebook::getnumber()
{
    for(int i=0;i<12;i++)
    {
        cout<<number[i];
    }
    return number;
}*/

int Facebook::getnumber()
{   
    return number;
}

int Facebook::updatenumber()
{
    cout<<"Enter the updated number = ";
    cin>>number;

    return number;
}

void Facebook::print()
{
	cout << "name   : "<<name<< endl;
	cout << "email  : "<<email<< endl;
	cout << "gender : "<<gender<< endl;
	cout << "number : "<<number<< endl;   
}

/*void updatenumber(int num)
{
    cout<<"Enter the updated number = ";
    cin>>num;
}*/



int main()
{
    Facebook *arr=new Facebook[2];
    string n,e;
    char g;
    int num,choice;//,mcount=0,fcount=0;

    for(int i=0; i<2; i++)
    {
        cout << "Name: ";
        cin >> n;

        cout << "Number: ";
        cin>>num;
        

        cout << "Email: ";
        cin >> e;

        cout << "Gender: ";
        cin>>g;

        arr[i].setname(n);
        
        arr[i].setnumber(num);
        
        arr[i].setemail(e);

        arr[i].setgender(g);
        cout<<endl;
        cout<<"Enter 1 if u want to change the number u entereted above or press 0 = ";
        cin>>choice;

        if(choice == 1)
        {
            arr[i].updatenumber();
        }
    }

    for(int i=0; i<2; i++)
    {
	  cout << "information of user "<< i+1 <<" = "<< endl;
      cout<<endl;
	  arr[i].print();
      cout<<endl;
    }

    return 0;
}