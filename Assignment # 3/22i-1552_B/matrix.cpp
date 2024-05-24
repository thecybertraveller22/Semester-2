/*Syed Arham Ahmed , BS-CY-B , 22i-1552 , Assignment # 3*/
#include"matrix.h"
#include<iostream>
#include <stdexcept>

using namespace std;

Matrix::Matrix(int rows,int cols)
{
    this->rows=rows;
    this->cols=cols;

    mat = new int*[rows];

    for(int i=0;i<rows;i++)
    {
        mat[i] = new int[cols];
    }
}

Matrix::Matrix(const Matrix &other) //copy constructor
{
    rows=other.rows;
    cols=other.cols;

    mat = new int*[rows];

    for(int i=0;i<rows;i++)
    {
        mat[i] = new int[cols];
        
        for(int j=0;j<cols;j++)
        {
            mat[i][j]=other.mat[i][j];
        }
    }
}

Matrix::~Matrix() //destructor
{
    for(int i = 0; i < rows; i++) 
    {
        delete[] mat[i];
    }

    delete[] mat;
}

int Matrix::getmatrix(int row,int col)
{
    if(row>=rows || col>=cols)
    {
        cout<<"invalid index"<<endl;
        return 0;
    }

    return mat[row][col]; // returns the value at a particular index
}

void Matrix::setmatrix(int row,int col,int value)
{
    if(row>=rows || col>=cols)
    {
        cout<<"invalid index"<<endl;
    }
    mat[row][col] = value; // setting value at the index
}

int Matrix::getcols()
{
    return cols;
}

int Matrix::getrows()
{
    return rows;
}

void Matrix::display()
{
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            cout<<mat[i][j]<<" ";
        }
        cout<<endl;
    }
}

Matrix Matrix::operator+(const Matrix &other)
{
    if(rows!=other.rows || cols!=other.cols)
    {
        cout<<"Invalid index"<<endl;
        //return 0;
    }
    Matrix result(rows,cols); //object result defined

    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            result.mat[i][j] = mat[i][j]+other.mat[i][j]; // obj result stores the added matrix
        }
    }

    return result;
}

Matrix Matrix::operator-(const Matrix &other) // same comments as for +
{
    if(rows!=other.rows || cols!=other.cols)
    {
        cout<<"Invalid index"<<endl;
        //return 0;
    }
    Matrix resu(rows,cols);

    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            resu.mat[i][j] = mat[i][j]-other.mat[i][j]; // obj resu stores the subtracted matrix
        }
    }

    return resu;
}

Matrix Matrix::operator*(const Matrix &other)
{
    if(rows!=other.rows || cols!=other.cols)
    {
        cout<<"Invalid index"<<endl;
        //return 0;
    }
    Matrix res(rows,cols);

    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            res.mat[i][j] = mat[i][j]*other.mat[i][j]; // obj resu stores the * matrix
        }
    }

    return res;
}

bool Matrix::operator==(const Matrix &other) // check if both matrices are equal
{
    
    if (rows != other.rows || cols != other.cols) // checking if rows and cols are same for both
    {
        cout << "Invalid index" << endl;
        return false;
    }


    for (int i = 0; i < rows; i++)
    {
        for (int j = 0; j < cols; j++)
        {
            if (mat[i][j] != other.mat[i][j])
            {
                return false;
            }
            else
            {
                return true;
            }
        }
    }

    
}

Matrix& Matrix::operator++()
{
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            ++mat[i][j]; // increments each matrix value by 1
        }
    }

    return *this;
}

Matrix Matrix::operator++(int)
{
    Matrix temp(*this);

    ++(*this);

    return temp;
}

Matrix& Matrix::operator=(const Matrix &other)
{
   
    if (this == &other)  // Check if assigning the matrix to itself
    {
        return *this;
    }
   
    for (int i = 0; i < rows; i++) // Free memory allocated 
    {
        delete[] mat[i];
    }

    delete[] mat;

    
    rows = other.rows; // assign rows
    cols = other.cols; // assigh  cols

    
    mat = new int*[rows]; // allocate memory

    for (int i = 0; i < rows; i++) 
    {
        mat[i] = new int[cols];
    }

    for (int i = 0; i < rows; i++) // copy the values 
    {
        for (int j = 0; j < cols; j++) 
        {
            mat[i][j] = other.mat[i][j];
        }
    }

    return *this; // returns the matrix in which data is copied
}

/*int main()
{
   

    Matrix mat1(2, 2);
    mat1.setmatrix(0, 0, 1);
    mat1.setmatrix(0, 1, 2);
    mat1.setmatrix(1, 0, 3);
    mat1.setmatrix(1, 1, 4);

    Matrix mat2(2, 2);
    mat2.setmatrix(0, 0, 5);
    mat2.setmatrix(0, 1, 6);
    mat2.setmatrix(1, 0, 7);
    mat2.setmatrix(1, 1, 8);

    cout << "Matrix 1:" << endl;
    mat1.display();
    cout << "Matrix 2:" << endl;
    mat2.display();

    mat2 = mat1;

    cout << "Matrix 1 after copy:" << endl;
    mat1.display();
    cout << "Matrix 2 after copy:" << endl;
    mat2.display();

    return 0;
}*/

/*int main()
{
    Matrix mat1(2, 2);
    mat1.setmatrix(0, 0, 1);
    mat1.setmatrix(0, 1, 2);
    mat1.setmatrix(1, 0, 3);
    mat1.setmatrix(1, 1, 4);

    Matrix mat2(2, 2);
    mat2.setmatrix(0, 0, 5);
    mat2.setmatrix(0, 1, 6);
    mat2.setmatrix(1, 0, 7);
    mat2.setmatrix(1, 1, 8);

    // Operate the matrices
    Matrix result = mat1 + mat2;
    Matrix resu = mat1-mat2;
    Matrix res = mat1*mat2;
    ++mat1;
    Matrix mat3=mat1++;

    // Display the matrices and the result
    cout << "Matrix 1:" <<endl;
    mat1.display();
    cout << "Matrix 2:" <<endl;
    mat2.display();
    cout << "Result:" <<endl;
    result.display();
    cout<<"Resu:"<<endl;
    resu.display();
    cout<<"Res:"<<endl;
    res.display();
    cout << "Matrix 3 (postfix increment):" << endl;
    mat3.display();

    return 0;
}*/
