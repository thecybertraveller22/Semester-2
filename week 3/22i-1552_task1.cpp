#include<iostream>

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

int main()
{
    int rows=0,cols=0;

    cout<<"Enter number of rows and then enter number of cols"<<endl;
    cin>>rows;
    cin>>cols;

    

    int** ptr1 = new int* [rows];
    for(int i=0;i<rows;i++)
    {
        ptr1[i] = new int[cols];
    }


    int *sum = CalculateSum(ptr1,rows,cols);

    return 0;
}