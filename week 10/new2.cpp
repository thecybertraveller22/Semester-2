#include <iostream>
#include <string>

using namespace std;

class Instructor {
public:
    Instructor() : firstName(""), lastName(""), officeNumber(""), designation("") {}
    Instructor(string fn, string ln, string on, string desig) : firstName(fn), lastName(ln), officeNumber(on), designation(desig) {}
    void set(string fn, string ln, string on, string desig) {
        firstName = fn;
        lastName = ln;
        officeNumber = on;
        designation = desig;
    }
    void print() {
        cout << "Instructor Name: " << firstName << " " << lastName << endl;
        cout << "Office Number: " << officeNumber << endl;
        cout << "Designation: " << designation << endl;
    }
private:
    string firstName;
    string lastName;
    string officeNumber;
    string designation;
};

class TextBook {
public:
    TextBook() : title(""), author(""), bookId(0) {}
    TextBook(string t, string a, int id) : title(t), author(a), bookId(id) {}
    void set(string t, string a, int id) {
        title = t;
        author = a;
        bookId = id;
    }
    void print() {
        cout << "Title: " << title << endl;
        cout << "Author: " << author << endl;
        cout << "Book ID: " << bookId << endl;
    }
private:
    string title;
    string author;
    int bookId;
};

class Course {
public:
    Course() {}
    Course(Instructor i, TextBook t)
     {
        instructor=i;
        textbook=t;
     }
    void setInstructor(Instructor i) {
        instructor = i;
    }
    void setTextbook(TextBook t) {
        textbook = t;
    }
    void print() {
        cout << "Course Information: " << endl;
        instructor.print();
        textbook.print();
    }
private:
    Instructor instructor;
    TextBook textbook;
};

int main() {
    Instructor i1("John", "Doe", "A101", "Professor");
    TextBook t1("Introduction to C++", "John Smith", 12345);
    Course c1(i1, t1);
    c1.print();

    Instructor i2;
    i2.set("Jane", "Doe", "B201", "Associate Professor");
    TextBook t2;
    t2.set("Data Structures and Algorithms", "Mike Johnson", 67890);
    Course c2;
    c2.setInstructor(i2);
    c2.setTextbook(t2);
    c2.print();

    return 0;
}
