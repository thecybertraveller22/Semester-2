#include<iostream>
#include<string>

using namespace std;

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

int main()
{
    int rows=0,columns=0;

    cout<<"Enter the number of rows and cols = ";
    cin>>rows;
    cin>>columns;

    int** ptr1 = new int* [rows];
    for(int i=0;i<rows;i++)
    {
        ptr1[i] = new int[columns];
    }

    string ans = Diagonal(ptr1,rows,columns);

    return 0;
}