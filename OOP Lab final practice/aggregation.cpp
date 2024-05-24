#include "aggregation.h"
#include <iostream>

using namespace std;

Student::Student(const string &name) : name(name), teacher(nullptr) {}

void Student::setTeacher(Teacher *teacher)
{
    this->teacher = teacher;
}

void Student::displayTeacher() const
{
    if (teacher)
    {
        cout << "Teacher for " << name << ": " << teacher->getName() << endl;
    }
    else
    {
        cout << name << " has no assigned teacher." << endl;
    }
}

Teacher::Teacher(const string &name) : name(name) {}

string Teacher::getName() const
{
    return name;
}

int main()
{
    Teacher *teacher1 = new Teacher("John Doe");
    Teacher *teacher2 = new Teacher("Jane Smith");

    Student *student1 = new Student("Alice");
    Student *student2 = new Student("Bob");

    student1->setTeacher(teacher1);
    student2->setTeacher(teacher2);

    student1->displayTeacher();
    student2->displayTeacher();

    // Clean up dynamic memory
    delete teacher1;
    delete teacher2;
    delete student1;
    delete student2;

    return 0;
}
