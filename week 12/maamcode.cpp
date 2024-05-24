#include <iostream>
using namespace std;

// base class
class Person {

public:
    Person()
    {
        cout << "*** Person constructor called..." << endl;
    }
    void eat() 
    {
        cout << "I can eat!" << endl;
    }

    void sleep() 
    {
        cout << "I can work!" << endl;
    }
};

// derived class
class Student : public Person {

public:
    Student()
    {
        cout << "*** Student constructor called..." << endl;
    }
    void study() {
        cout << "I can study ! " << endl;
    }
};

class Teacher : public Person {

public:
    Teacher()
    {
        cout << "*** Teacher constructor called..." << endl;
    }
    void teach() {
        cout << "I can Teach ! " << endl;
    }
};

class Instructor : public Teacher 
{
public:
    Instructor()
    {
        cout << "*** Instructor constructor called..." << endl;
    }
    void instruct() {
        cout << "I can Instruct ! " << endl;
    }
};

int main() {
    // Create object of the derived classes
    Student s1;
    Teacher t1;
    // Calling members of the base class for derived class1
    s1.eat();
    s1.sleep();

    // Calling member of the derived class
    s1.study();

    // Calling members of the base class for derived class2
    t1.eat();
    t1.sleep();

    // Calling member of the derived class
    t1.teach();



    Instructor i1;
    i1.eat();
    i1.sleep();
    i1.teach();
    i1.instruct();

    return 0;
}