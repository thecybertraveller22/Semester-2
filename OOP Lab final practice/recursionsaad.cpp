/*
 * Block.cpp
 *
 *  Created on: Mar 18, 2023
 *      Author: i22-1736
 */

#include "recursionsaad.h"
#include <string>
#include <iostream>
Block::Block() : material("card")
{

    Length = 0;
    Height = 0;
    Width = 0;
    color = "None";
    countofBlocks++;
}

int Block::countofBlocks = 0;
Block::Block(float a, float b, float c, std::string d, std::string e) : material(e)
{

    Length = a;
    Width = b;
    Height = c;
    color = d;
    countofBlocks++;
}
void Block::setLength(float a)
{
    Length = a;
}

void Block::setWidth(float a)
{
    Width = a;
}

void Block::setHeight(float a)
{
    Height = a;
}

void Block::setcolor(string a)
{
    color = a;
}

float Block::getLength() const
{
    return Length;
}

float Block::getWidth() const
{
    return Width;
}
float Block::getHeight() const
{
    return Height;
}

string Block::getColor() const
{
    return color;
}
string Block::getMaterial() const
{
    return material;
}

float Block::getVolume() const
{
    return Length * Width * Height;
}

float Block::getSurfaceArea() const
{
    return 2 * (Length * Width + Length * Height + Width * Height);
}

void Block::Print() const
{
    cout << "Height: " << Height << endl;
    cout << "Width: " << Width << endl;
    cout << "Length: " << Length << endl;
    cout << "Material: " << material << endl;
    cout << "Colour: " << color << endl;
    cout << "Volume: " << this->getVolume() << endl;
    cout << "Surface Area: " << this->getSurfaceArea() << endl;
}
int main()
{

    Block a(2, 3, 4, "blue");
    Block b(4, 4, 4, "black", "wood");
    cout << "Details of block a are the following " << endl;
    a.Print();

    cout << "\nDetails of block b are the following " << endl;
    b.Print();

    cout << "\nCount of blocks is: " << Block::countofBlocks << endl;
    return 0;
}
