#ifndef TASK2_H_H
#define TASK2_H_H

class Matrix
{
    private:
        int rows;
        int columns;
        int **matrix;

    public:
        Matrix();
        Matrix(int r,int c);

        Matrix operator+(int a);
        Matrix operator-(int a);

        Matrix operator=(const Matrix &obj);
        Matrix operator==(const Matrix &obj);
        Matrix operator+(const Matrix &obj);
        Matrix operator-(const Matrix &obj);
        

};

#endif



