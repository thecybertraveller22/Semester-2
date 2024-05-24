#include<iostream>
#include<string>

using namespace std;

int* CalculateSum(int **p1, int m,int n)
{
    int *sum_row = new int [m];

    for(int i=0;i<m;i++)
    {
        for(int j=0;j<n;j++)
        {
            cin>>p1[i][j];
        }
    }

    for(int i=0;i<m;i++) // rows
    {
       for(int j=0;j<n;j++) //cols
       {
            sum_row[i] = sum_row[i] + p1[i][j];
       }
    }  

    return sum_row;
}

string Diagonal(int **matrix ,int rows,int columns)
{
    string ans="notupper";

    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            cin>>matrix[i][j];
        }
    }

    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            if(j<i)
            {
                if((*(*(matrix+i)+j)==0))
                {
                    ans = "upper";
                }
            }
          
        }
        
    }
    return ans;
}

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

void ThreeD (int*** ptr, int pages, int rows, int columns)
{
    ptr = new int**[pages];
    for(int i=0;i<pages;i++)
    {
        *(ptr+i) = new int*[rows];

        for(int j=0;j<rows;j++)
        {
            **(ptr+j) = new int[columns];
        }
    }
}

int*** Square(int ***ptr, int pages, int rows, int columns)
{

    for(int i=0;i<pages;i++)
    {
        for(int j=0;j<rows;j++)
        {
            for(int k=0;k<columns;k++)
            {
                *(*(*(ptr+i)+j)+k) *= *(*(*(ptr+i)+j)+k);
            }
        }
    }
    return ptr;
}