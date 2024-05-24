/*
 * Block.h
 *
 *  Created on: Mar 18, 2023
 *      Author: i22-1736
 */

#ifndef RECURSIONSAAD_H_
#define RECURSIONSAAD_H_
#include <string>
using namespace std;
class Block
{

    float Length, Width, Height;
    const std::string material;
    std::string color;

public:
    Block();
    Block(float a, float b, float c, string d, string e = "card");
    void setLength(float a);
    void setWidth(float a);
    void setHeight(float a);
    void setcolor(string a);
    float getLength() const;
    float getWidth() const;
    float getHeight() const;
    string getMaterial() const;
    string getColor() const;
    float getVolume() const;
    float getSurfaceArea() const;
    void Print() const;
    int static countofBlocks;
};

#endif /* BLOCK_H_ */