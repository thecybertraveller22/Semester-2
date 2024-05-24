/*Syed Arham Ahmed , BS-CY-B , 22i-1552 , Assignment # 3*/
#ifndef MATRIX_H_H
#define MATRIX_H_H

class Matrix
{
    private:
        int rows;
        int cols;
        int **mat;
    public:
        Matrix(int rows,int cols);
        Matrix(const Matrix &other);
        ~Matrix();
        Matrix operator+(const Matrix &other);
        Matrix operator-(const Matrix &other);
        Matrix operator*(const Matrix &other);
        bool operator==(const Matrix &other);
        Matrix operator++(int); //postfix
        Matrix& operator++(); //prefix
        Matrix& operator=(const Matrix &other);
        int getmatrix(int row,int col);
        void setmatrix(int row,int col,int value);
        int getrows();
        int getcols();
        void display();


};


#endif