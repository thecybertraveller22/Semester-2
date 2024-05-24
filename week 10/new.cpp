#include <cmath>
#include<iostream>

using namespace std;

class Point {
public:
    Point() : xCoordinate(0), yCoordinate(0) {} // Default constructor
    Point(int x, int y) : xCoordinate(x), yCoordinate(y) {} // Parameterized constructor
    Point(const Point& p) : xCoordinate(p.xCoordinate), yCoordinate(p.yCoordinate) {} // Copy constructor
    
    int getX_Coordinate() const {
        return xCoordinate;
    }
    
    int getY_Coordinate() const {
        return yCoordinate;
    }
    
private:
    int xCoordinate;
    int yCoordinate;
};

class Line {
public:
    Line() : point1(4, 6), point2(2, 4) {} // Default constructor
    
    Line(int x1, int y1, int x2, int y2) {
        point1 = Point(x1, y1);
        point2 = Point(x2, y2);
    } // Parameterized constructor
    
    Line(const Point& p1, const Point& p2) : point1(p1), point2(p2) {} // Copy constructor
    
    float findSlope() 
    {
        float slope = (point2.getY_Coordinate() - point1.getY_Coordinate()) / (point2.getX_Coordinate() - point1.getX_Coordinate());
        return slope;
    }
    
    float findLength() 
    {
        float length = std::sqrt(std::pow((point2.getX_Coordinate() - point1.getX_Coordinate()), 2) + std::pow((point2.getY_Coordinate() - point1.getY_Coordinate()), 2));
        return length;
    }
    
    Point& findMidPoint() {
        int x = (point1.getX_Coordinate() + point2.getX_Coordinate()) / 2;
        int y = (point1.getY_Coordinate() + point2.getY_Coordinate()) / 2;
        Point* midPoint = new Point(x, y);
        return *midPoint;
    }
    
private:
    Point point1;
    Point point2;
};

int main() 
{
    Point p1(2, 3);
    Point p2(5, 120);
    Point p3(p1);
    
    std::cout << "p1 = (" << p1.getX_Coordinate() << ", " << p1.getY_Coordinate() << ")" << std::endl;
    std::cout << "p2 = (" << p2.getX_Coordinate() << ", " << p2.getY_Coordinate() << ")" << std::endl;
    std::cout << "p3 = (" << p3.getX_Coordinate() << ", " << p3.getY_Coordinate() << ")" << std::endl;
    
    Line l1;
    Line l2(p1, p2);
    Line l3(1, 2, 4, 6);
    
    std::cout << "l1 length = " << l1.findLength() << ", slope = " << l1.findSlope() << std::endl;
    std::cout << "l2 length = " << l2.findLength() << ", slope = " << l2.findSlope() << std::endl;
    std::cout << "l3 length = " << l3.findLength() << ", slope = " << l3.findSlope() << std::endl;
    
    Point midPoint = l3.findMidPoint();
    std::cout << "Midpoint of l3 = (" << midPoint.getX_Coordinate() << ", " << midPoint.getY_Coordinate() << ")" << std::endl;
    
    return 0;
}
