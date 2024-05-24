#ifndef TASK1_H_
#define TASK1_H_

#include<iostream>
#include<string>

using namespace std;

class IntegerList
{
    private:
        int *list;
        int numelements;
        int size;

    public:
        IntegerList();
        IntegerList(int s);
        IntegerList(IntegerList &copy);
        
        bool isValid(int subscript);
        void setElement(int subscript ,int value);// confusion
        int getElement(int subscript);// confusion
        ~IntegerList();


};


#endif