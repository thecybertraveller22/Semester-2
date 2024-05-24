#include<iostream>
#include"task2.h"

using namespace std;

Instructor::Instructor()
{
    first_name=" ";
    last_name=" ";
    office_number=" ";
    designation=" ";
}

Instructor::Instructor(string fn,string ln,string on,string d)
{
    first_name = fn;
    last_name = ln;
    office_number = on;
    designation = d;
}

void Instructor::setInstructor()
{
    cout<<"Enter the first name = "<<first_name<<endl;
    cin>>first_name;
    cout<<"Enter the last name = "<<last_name<<endl;
    cin>>last_name;
    cout<<"Enter the office number = "<<office_number<<endl;
    cin>>office_number;
    cout<<"Enter the designation = "<<designation<<endl;
    cin>>designation;
}

void Instructor::printInstructor()
{
    cout << "Instructor Information:" << endl;
    cout << "First Name: " << first_name << endl;
    cout << "Last Name: " << last_name << endl;
    cout << "Office Number: " << office_number << endl;
    cout << "Designation: " << designation << endl;
}

TextBook::TextBook()
{
    title = "";
    author = "";
    book_id = 0;
}

TextBook::TextBook(string t,string a,int b_id)
{
    title=t;
    author=a;
    book_id=b_id;
}

void TextBook::printTextbook()
{
    cout << "Textbook Information:" << endl;
    cout << "Title: " << title << endl;
    cout << "Author: " << author << endl;
    cout << "Book ID: " << book_id << endl;
}

Course::Course()
{

}

Course::Course(Instructor i, TextBook t)
{
    instructor=i;
    textbook=t;
}



void Course::printCourse()
{
    cout<<"Course Information:"<<endl;
    instructor.printInstructor();
    textbook.printTextbook();
}



int main()
{
    
    Course courses[3];

    
    for (int i = 0; i < 3; i++)
    {
        cout << "Enter Instructor Information for Course " << i + 1 << ":" << endl;
        courses[i].instructor.setInstructor();

        cout << "Enter Textbook Information for Course " << i + 1 << ":" << endl;
        cout << "Enter Title: ";
        cin.ignore();
        getline(cin, courses[i].textbook.title);
        cout << "Enter Author: ";
        getline(cin, courses[i].textbook.author);
        cout << "Enter Book ID: ";
        cin >> courses[i].textbook.book_id;
        cout << endl;
    }

    for (int i = 0; i < 3; i++) 
    {
        cout << "Course Information for Course " << i + 1 << ":" << endl;
        courses[i].printCourse();
        cout << endl;
    }

    return 0;
}

