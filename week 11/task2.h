#ifndef TASK2_H_
#define TASK2_H_
#include<string.h>
#include<iostream>

using namespace std;

class Instructor
{
    public:
        string first_name;
        string last_name;
        string office_number;
        string designation;

       Instructor();
       Instructor(string fn,string ln,string on,string d);
       void setInstructor(); // take input and set values
       void printInstructor();
};

class TextBook
{
    public:
        string title;
        string author;
        int book_id;

        TextBook();
        TextBook(string t,string a,int b_id);
        int setTextbook();
        void printTextbook(); // displays the class’s attribute values
};

class Course
{
    public:
        Course();
        Course(Instructor i, TextBook t);
        
        void printCourse();

        Instructor instructor;
        TextBook textbook;
};

#endif