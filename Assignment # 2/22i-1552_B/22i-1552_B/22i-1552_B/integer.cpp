/*Syed Arham Ahmed , 22i-1552 , BS_CY_B, Assignement # 2*/
#include"integer.h"
#include<iostream>

using namespace std;


integer::integer()
{
    num = 0;
}

integer::integer(int n)
{
    this->num = n;
}

void integer::set(int i)
{
    num = i;
}

int integer::get() const
{
    return num;
}

int integer::bitcount()
{
    int count=0;

    while(num!=0)
    {
        count+=num&1;
        num >>= 1;
    }

    return count;
}

int integer::compareto(int i,int j)
{
    if(i==j)
    {
        cout<<i<<" and "<<j<<" are same "<<endl;
    }
    else
    {
        cout<<i<<" and "<<j<<" are different "<<endl;
    }

    return 0;
}

double integer::doublevalue()
{
    return static_cast<double>(num);
}

float integer::floatvalue()
{
    return static_cast<float>(num);
}

/*integer plus(const integer& num2)
{
    return integer(num+num2.num);
}

integer minus(const integer&num2)
{
    return integer(num - num2.num);
}*/