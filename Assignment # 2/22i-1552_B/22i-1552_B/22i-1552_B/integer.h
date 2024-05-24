/*Syed Arham Ahmed , 22i-1552 , BS_CY_B, Assignement # 2*/
#ifndef STRING_H
#define STRING_H

class integer
{
    private:
        int num;
    public:
        integer();
        integer(int n);
        void set(int i);
        int get()const;
        int bitcount();
        int compareto(int i,int j);
        double doublevalue();
        float floatvalue();
        integer plus(const integer&);
        integer minus(const integer&);
};


#endif