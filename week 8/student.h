/*
 * student.h
 *
 *  Created on: Mar 22, 2023
 *      Author: oop
 */

#ifndef STUDENT_H_
#define STUDENT_H_

#include<string>
#include<iostream>
using namespace std;

class student {
private:
	string name;
	int age;
	string rollNum;
	float gpa;

public:
	student();
	student(const student &obj);

	void setName(string n);
	string getName();
	void setAge(int a);
	int getAge();
	void setRoll(string r);
	string getRoll();
	void setGPA(float g);
	float getGPA();

	void print();
	friend void accessData(student);
	friend student accessing(student);

};

#endif /* STUDENT_H_ */