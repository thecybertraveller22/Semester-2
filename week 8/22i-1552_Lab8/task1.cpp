#include"task1.h"
#include<iostream>
#include<cstdlib>

using namespace std;

IntegerList::IntegerList()
{

}

IntegerList::IntegerList(int s)
{
    this->size = s;
    numelements = 0;
    list = new int[size];

    for(int i=0;i<size;i++)
    {
        list[i] = 0;
    }
}

IntegerList::IntegerList(IntegerList &copy)
{
    this->size = copy.size;
    numelements = copy.numelements;
    list = new int[size];

    for(int i=0;i<size;i++)
    {
        list[i] = copy.list[i];
    }
}

bool IntegerList::isValid(int subscript)
{
    return subscript>=0 && subscript<numelements;
}

void IntegerList::setElement(int subscript, int value)
{
    cout<<"SET ELEMENT"<<endl;
    if(isValid(subscript))
    {
        list[subscript]=value;
    }
    else
    {
        cout<<"Subscript doesnot validate"<<endl;
        exit(EXIT_FAILURE);
    }
}

int IntegerList::getElement(int subscript)
{
    cout<<"GET ELEMENT "<<endl;
    if(isValid(subscript))
    {
        return list[subscript];
    }
    else
    {
        cout<<"Subscript doesnot validate"<<endl;
        exit(EXIT_FAILURE);
    }
}

IntegerList::~IntegerList()
{
    delete[] list;
}


int main()
{
    
    IntegerList I1(5);
    cout<<I1.isValid(3)<<endl;
    I1.setElement(0, 10);
    cout<<I1.getElement(0)<<endl;
    IntegerList I2 = I1;
    cout<<I2.getElement(0)<<endl;
    return 0;

    return 0;
}
