#include<iostream>
#include<cmath>
#include"caa.h"

using namespace std;

Point::Point()
{

}

Point::Point(int x,int y)
{
    xcord = x;
    ycord = y;
}

Point::Point(const Point &p)
{
    xcord = p.xcord;
    ycord = p.ycord;
    cout<<"Copy constructor here , I dont welcome u but still u are here so go away "<<endl;
}

int Point::getX_Cordinate() const
{
    return xcord;
}

int Point::getY_Cordinate() const 
{
    return ycord;
}

Line::Line()
{

}

Line::Line(int x1,int y1,int x2,int y2) : p1(x1,y1) , p2(x2,y2) 
{
    cout<<"Points are now created"<<endl;
}

Line::Line(const Point &p1,const Point &p2)
{
    this->p1 = p1;
    this->p2 = p2;
}

float Line::findSlope()
{
    float diffx = p2.getX_Cordinate() - p1.getX_Cordinate();
    float diffy = p2.getY_Cordinate() - p1.getY_Cordinate();
    float slope;
    if(diffx==0)
    {
        cout<<"Cannot divide by zero"<<endl;
    }
    else
    {
        slope = diffy/diffx;
    }
    cout<<"The slope is = "<<slope<<endl;
    return slope;
}

Point& Line::findMidPoint()
{
    float x = static_cast<float>((p1.getX_Cordinate()+p2.getX_Cordinate()))/2;
    float y = static_cast<float>((p1.getY_Cordinate()+p2.getY_Cordinate()))/2;

    cout<<"The midpoint is = ("<<x<<","<<y<<")"<<endl;

    Point midpoint(x,y);

    return midpoint;

}

float Line::findLength()
{
    float D = sqrt(pow(p2.getX_Cordinate()-p1.getX_Cordinate(),2) + pow(p2.getY_Cordinate()-p1.getY_Cordinate(),2));
    cout<<"The length is = "<<D<<endl;

    return D;
}

int main()
{
    Line l(1,2,4,5);

    l.findSlope();
    l.findLength();
    l.findMidPoint();

    return 0;
}