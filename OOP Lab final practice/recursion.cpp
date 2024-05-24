#include<iostream>
#include"recursion.h"
#include<string.h>

using namespace std;



Block::Block()
{
    material = "card";
    countofblocks++;
}

Block::Block(int l,int w,int h,string m,string c)
{
    length = l;
    width = w;
    height = h;
    material = m;
    color = c;
    //countofblocks++;
}

void Block::setdata()
{
    cout<<"Enter the length = ";
    cin>>length;
    cout<<"Enter the widht = ";
    cin>>width;
    cout<<"Enter the height = ";
    cin>>height;
    cout<<"Enter the material = ";
    cin>>material;
    cout<<"Enter the color = ";
    cin>>color;
}
        
int Block::getVolume()
{
    int Volume = length * width * height;

    return Volume;
} 

int Block::getSurfaceArea()
{
    int surfacearea = 2*(length*width + length*height + width*height);

    return surfacearea;
} 
        
void Block::print()
{
    cout<<length<<","<<width<<","<<height<<","<<material<<","<<color<<","<<getVolume()<<","<<getSurfaceArea()<<endl;  
} 

int Block::getcountofblocks()
{
    return countofblocks;
}
int Block::countofblocks = 0;
int main()
{
    int num;

    cout<<"Enter the number of blocks you wish to make = ";
    cin>>num;

    Block *block = new Block[num];

    //Block::countofblocks++;

    for(int i=0;i<num;i++)
    {
        block[i].setdata();
        block[i].getSurfaceArea();
        block[i].getVolume();
        cout<<endl;
        block[i].print();
        cout<<endl;
    }

    cout<<"The total number of blocks that are created are = "<<block[0].getcountofblocks()<<endl;

    return 0;
}