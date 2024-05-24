#ifndef TASK1_H_H
#define TASK1_H_H

class Distance
{
    private:
        int feet;
        int inches;

    public:
        Distance();
        Distance(int f,int i);
        
        bool setFeet(int f);
        int getFeet()const;
        bool setInches(int i);
        int getInches()const;

        Distance operator+(const Distance &obj);
        Distance operator-(const Distance &obj);
        Distance operator=(const Distance &obj);
};

#endif