#include<iostream>
#include<string>

using namespace std;

int **MatrixSum(int **MatrixA, int **MatrixB )
{  
   int rows=3,columns=3;
   int **MatrixC = new int* [3];
     
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            cin>>MatrixA[i][j];
        }
    }

    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            cin>>MatrixB[i][j];
        }
    }

    for (int i = 0; i < 3; i++) 
    {
        for (int j = 0; j < 3; j++) 
        {
            
            MatrixC[i][j] = MatrixA[i][j] + MatrixB[i][j];
            
        }
    }

    return MatrixC;
}

int main()
{
    //int rows=0,columns=0;

    /*cout<<"Enter the number of rows and cols = ";
    cin>>rows;
    cin>>columns;*/

    int** ptr1 = new int* [3];
    for(int i=0;i<3;i++)
    {
        ptr1[i] = new int[3];
    }

    int** ptr2 = new int* [3];
    for(int i=0;i<3;i++)
    {
        ptr2[i] = new int[3];
    }

    int **matc = MatrixSum(ptr1,ptr2);

    return 0;
}