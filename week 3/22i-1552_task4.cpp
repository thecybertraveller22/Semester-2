#include<iostream>

using namespace std;

void ThreeD (int*** ptr, int pages, int rows, int columns)
{
    ptr = new int**[pages];
    for(int k=0;k<pages;k++)
    {
        *(ptr+k) = new int*[rows];

        for(int p=0;p<rows;p++)
        {
            *(*(ptr+k)+p) = new int[columns];
        }
    }
}


int main()
{
    int rows=2,cols=2,pages=2;

    int ***ptr = new int**[4];
    for(int i=0;i<4;i++)
    {
        ptr[i] = new int*[5];

        for(int j=0;j<5;j++)
        {
            ptr[i][j] = new int [6];
        }
    }

    ThreeD(ptr,pages,rows,cols);

    return 0;
}