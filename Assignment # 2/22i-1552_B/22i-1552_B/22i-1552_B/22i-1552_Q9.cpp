/*Syed Arham Ahmed , 22i-1552 , BS_CY_B, Assignement # 2*/
#include"integer.cpp"
#include"integer.h"
#include<iostream>

using namespace std;

int main()
{
    integer i=2;
    integer j=3;

    i.set(10);
    j.set(4);

    cout<<endl;
    cout<<"i = "<<i.get()<<endl;
    cout<<"j = "<<j.get()<<endl;
    cout<<endl;

    cout<<"i bitcount = "<<i.bitcount()<<endl;
    cout<<endl;
    i.compareto(2,2);
    i.compareto(3,7);
    cout<<endl;
    i.doublevalue();
    cout<<endl;
    /*i.plus(3);
    i.minus(3);*/
    
    return 0;
}