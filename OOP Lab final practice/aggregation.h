#ifndef AGGREGATION_H_
#define AGGREGATION_H_

#include <string>

using namespace std;

class Teacher; // Forward declaration

class Student
{
private:
    string name;
    Teacher *teacher;

public:
    Student(const string &name);
    void setTeacher(Teacher *teacher);
    void displayTeacher() const;
};

class Teacher
{
private:
    string name;

public:
    Teacher(const string &name);
    string getName() const;
};

#endif
