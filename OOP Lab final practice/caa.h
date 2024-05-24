#ifndef CAA_H_
#define CAA_H_


class Point
{
    public:
        int xcord;
        int ycord;

        Point();
        Point(int x,int y);
        Point(const Point &p);
        int getX_Cordinate() const;
        int getY_Cordinate() const;
};

class Line
{
    public:
        int point1;
        int point2;

        Point p1;
        Point p2;

        Line();
        Line(int x1,int y1,int x2,int y2);
        Line(const Point &p1,const Point &p2);
        
        float findSlope();
        float findLength();
        Point& findMidPoint();
};

#endif