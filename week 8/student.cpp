/*
 * student.cpp
 *
 *  Created on: Mar 22, 2023
 *      Author: oop
 */

#include "student.h"
#include<string>
#include<iostream>
using namespace std;

student::student() {
	// TODO Auto-generated constructor stub

}

student::student(const student &obj)
{
   this->name=obj.name;
   this->age=obj.age;
   this->rollNum=obj.rollNum;
   this->gpa=obj.gpa;
}

//getter setters
void student::setName(string n)
{
	name=n;
}

void student::setAge(int a)
{
	age=a;
}
void student::setRoll(string r)
{
	rollNum=r;
}
void student::setGPA(float g)
{
	gpa=g;
}

string student::getName()
{return name;}
int student::getAge()
{return age;}
string student::getRoll()
{return rollNum;}
float student::getGPA()
{return gpa;}


//print
void student :: print()
{
	cout << "name: "<< this->name<< endl;
	cout << "age: "<< this->age<< endl;
	cout << "roll number: "<< this->rollNum<< endl;
	cout << "gpa: "<< this->gpa<< endl;
}

//friend function
void accessData(student obj)
{
	 cout << "Accessing data of roll number: "<< obj.rollNum<< endl;
}

student accessing(student obj)
{
	cout << "Accessing data of roll number: "<< obj.rollNum<< endl;
	return obj;
}

int main()
{
  student s1;
  student s2;

  s1.setName("abc");
  s1.setAge(20);
  s1.setRoll("bse123");
  s1.setGPA(2.5);

  s2.setName("xyz");
  s2.setAge(21);
  s2.setRoll("bse234");
  s2.setGPA(3.5);

  s1.print();
  s2.print();

  student *arr=new student[5];
  string n,r;
  float g;
  int a;
  for(int i=0; i<5; i++)
  {
	  cout << "Name: ";
	  cin >> n;
	  cout << "Age: ";
	  cin >> a;
	  cout << "Roll number: ";
	  cin >> r;
	  cout << "GPA: ";
	  cin >> g;

	  arr[i].setName(n);
	  arr[i].setAge(a);
	  arr[i].setRoll(r);
	  arr[i].setGPA(g);
  }

  for(int i=0; i<5; i++)
    {
	  cout << "information of "<< i << " index: "<< endl;
	  arr[i].print();
    }

  cout << "Calling friend function: "<< endl;
  accessData(s1);
  accessData(s2);

}