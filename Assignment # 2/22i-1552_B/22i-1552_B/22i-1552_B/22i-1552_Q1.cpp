/*Syed Arham Ahmed , 22i-1552 , BS_CY_B, Assignement # 2*/

#include<iostream>
#include<string.h>

using namespace std;

class Employee
{
    public:
        char *name;
        double salary;

    // Constructor for Class Employee
    Employee(const char *name , double salary )
    {
        size_t length = strlen(name); // calculating the length of the name
        this->name = new char[length+1]; // allocating memory

        for(size_t i=0;i<length;i++) // The loop copies each character one by one into allocated memory
        {
            this->name[i] = name[i];
        }

        this->salary = salary; // this pointer used to access the salary property of the object and assign the value to salary of the constructor
    }

    char *getName()
    {
        return name; // return the name to main
    }

    double getSalary()
    {
        return salary; // return the salary to main
    }

};

int main()
{
    char name[20];
    double salary;

    cout<<"What is your name = ";
    cin.getline(name,20);

    cout<<"Enter your salary = ";
    cin>>salary;

    cin.ignore(); // used to avoid random characters from printing

    Employee newemp(name,salary); // calling the class with the given parameters by creating object newemp

    cout<<"Find below the details of the new employee"<<endl;
    cout<<"Name   = "<<newemp.name<<endl;
    cout<<"Salary = "<<newemp.salary<<endl;

    return 0;
}