#ifndef TASK1_H_
#define TASK1_H_

class Point 
{
    public:
        int xcord;
        int ycord;

        Point();
        Point(int x,int y);
        Point(const Point &p);
        int getX_Coordinate()const;
        int getY_Coordinate()const;
};

class Line 
{
    public:
        int Point_1;
        int Point_2;

        Point p1;
        Point p2;

        Line();
        Line(int x1,int y1,int x2,int y2);
        //Line(int z1,int c1,int z2, int c2);
        ~Line();
        Line(const Point &p1,const Point &p2);
        float findSlope();
        float findLength();
        Point& findMidPoint();


};

#endif