#include "block.h"
#include<iostream>

using namespace std;

Block::Block()
{
    //cout<<"OBJECT CREATED"<<endl;
    length = 0;
    width = 0;
    height = 0;
    material = new char[10];
    color = new char[10];
    volume = 0;
    surface_area = 0;
    countofblocks++;
}

Block::Block(float l,float w,float h,char *m,char *c,float v, float s)
{
    this->length = l;
    this->width = w;
    this->height = h;
    this->material = m;
    this->color = c;
    this->volume = v;
    this->surface_area = s;
    countofblocks++;
}

/*Block::~Block()
{
    delete[] material;
    delete[] color;
}*/

void Block::setdata()
{
    cout<<"Enter the length = ";
    cin>>length;

    cout<<"Enter the width = ";
    cin>>width;

    cout<<"Enter the height = ";
    cin>>height;

    cout<<"Enter the material being used (wood, card, metal) = ";
    cin.ignore();
    cin.getline(material,10);

    cout<<"Enter the color = ";
    //cin.ignore();
    cin.getline(color,10);
}

float Block::getvolume()
{
    volume = length*width*height;

    return volume;
}

float Block::getsurfacearea()
{
    surface_area = 2*(length*width + length*height + width*height);

    return surface_area;
}

float Block::print()
{
    cout<<"Length       = "<<length<<endl;
    cout<<"Width        = "<<width<<endl;
    cout<<"Height       = "<<height<<endl;
    cout<<"Material     = "<<material<<endl;
    cout<<"Color        = "<<color<<endl;
    cout<<"Volume       = "<<volume<<endl;
    cout<<"Surface Area = "<<surface_area<<endl;
}

int Block::countofblocks = 0;

int Block::getcount()
{
    return countofblocks;
}

int main()
{
    /*Block b1;

    b1.setdata();*/
    //cout<<"Volume = "<<b1.getvolume()<<endl;
    //cout<<"Surface Area = "<<b1.getsurfacearea()<<endl;
    /*b1.getsurfacearea();
    b1.getvolume();
    b1.print();*/

    int num;

    cout<<"Enter the number of blocks you wish to make = ";
    cin>>num;

    Block *block = new Block[num];

    for(int i=0;i<num;i++)
    {
        block[i].setdata();
        block[i].getsurfacearea();
        block[i].getvolume();
        cout<<endl;
        block[i].print();
        cout<<endl;
    }

    cout<<"The total number of blocks that are created are = "<<Block::getcount()<<endl;

    delete[] block;

    return 0;
}