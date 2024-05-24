#ifndef RECURSION_H_
#define RECURSION_H_
#include<string>
using namespace std;

class Block
{
    private:
        int length;
        int width;
        int height;
        string material;
        string color;
    public:
        int static countofblocks;
        Block(); // material = "card";
        Block(int l,int w,int h,string m,string c);
        void setdata();
        int getVolume(); // Volume=length × breadth × height.
        int getSurfaceArea(); // surface area = 2*(l*w + l*h + w*h).
        void print(); // Length Width, Height, Material, Color, Volume, Surface Area
        int getcountofblocks();
};



#endif