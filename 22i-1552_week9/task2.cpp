#include<iostream>
#include"task2.h"

using namespace std;

Matrix::Matrix()
{

}

Matrix::Matrix(int r,int c)
{
    rows = r;
    columns = c;

    matrix = new int*[rows];

    for(int i=0; i<rows; i++)
    {
        *(matrix+i) = new int[columns];
    }
}

Matrix Matrix::operator+(int a)
{
    Matrix m(rows,columns);

    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            m.matrix[i][j] = matrix[i][j] + a;
        }
    }

    return m;
}

Matrix Matrix::operator-(int a)
{
    Matrix m(rows,columns);

    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            m.matrix[i][j] = matrix[i][j] - a;
        }
    }

    return m;
}

Matrix Matrix::operator=(const Matrix &obj)
{
    Matrix m(rows,columns);

    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            m.matrix[i][j] = matrix[i][j];
        }
    }

    return m;
}

Matrix Matrix::operator==(const Matrix &obj)
{
    Matrix m(rows,columns);
    int c=0;

    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            if(m.matrix[i][j] == matrix[i][j])
            {
                c++;
            }
        }
    }
    if(c==(rows+columns))
    {
        cout<<"Same"<<endl;
    }
    else
    {
        cout<<"Not Same"<<endl;
    }

    return m;
}

Matrix Matrix::operator+(const Matrix &obj)
{
    Matrix m(rows,columns);

    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            m.matrix[i][j] = this->matrix[i][j] + obj.matrix[i][j];
        }
    }

    return m;
}

Matrix Matrix::operator-(const Matrix &obj)
{
    Matrix m(rows,columns);

    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<columns;j++)
        {
            m.matrix[i][j] = this->matrix[i][j] - obj.matrix[i][j];
        }
    }

    return m;
}

int main()
{
    
    return 0;
}