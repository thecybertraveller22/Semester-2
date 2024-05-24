#include<iostream>
#include<cmath>
#include"task1.h"

using namespace std;

Point::Point()
{

}

Point::Point(int x,int y)
{
    xcord = x;
    ycord = y;

    cout<<"Values of xcord andd ycord are set"<<endl;
}

Point::Point(const Point &p)
{
    xcord = p.xcord;
    ycord = p.ycord;
    cout<<"Copy Constructor does not welcome you"<<endl;
}

int Point::getX_Coordinate()const
{
    return xcord;
}

int Point::getY_Coordinate()const
{
    return ycord;
}

Line::Line()
{

}

Line::Line(int x1,int y1,int x2,int y2) : p1(x1,y1), p2(x2,y2)
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
   int diff_x = p2.getX_Coordinate() - p1.getX_Coordinate();
   int diff_y = p2.getY_Coordinate() - p1.getY_Coordinate();
   float slope;

   if(diff_x==0)
   {
        cout<<"Cannot divide by zero"<<endl;
   }
   else
   {
        slope = static_cast<float>(diff_y)/diff_x;
        cout<<"The slope is = "<<slope<<endl;
   }

    return slope;
}

Line::~Line()
{
    cout<<"Line destroyed"<<endl;
}

Point& Line::findMidPoint()
{
    int add_x = (p1.getX_Coordinate() + p2.getX_Coordinate());
    int add_y = (p1.getY_Coordinate() + p2.getY_Coordinate());

    float mid_x,mid_y;

    mid_x = static_cast<float>(add_x)/2;
    mid_y = static_cast<float>(add_y)/2;


    cout<<"Midx = "<<mid_x<<endl;
    cout<<"Midy = "<<mid_y<<endl;

    cout<<"Midpoint = "<<mid_x<<" , "<<mid_y<<endl;

    Point midPoint(mid_x, mid_y);

    return midPoint;
}

float Line::findLength()
{
    int diff_x = p2.getX_Coordinate() - p1.getX_Coordinate();
    int diff_y = p2.getY_Coordinate() - p1.getY_Coordinate();

    float len;

    len = sqrt((diff_x*diff_x)+(diff_y*diff_y));

    cout<<"The lenght is = "<<len<<endl;

    return len;
}



int main()
{
    cout<<endl;
    Line l1(1,2,4,5);
    cout<<endl;
    l1.findSlope();
    cout<<endl;
    l1.findLength();
    cout<<endl;
    l1.findMidPoint();
    cout<<endl;
    
    return 0;
}