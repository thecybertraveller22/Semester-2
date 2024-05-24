/*Syed Arham Ahmed , BS-CY-B , 22i-1552 , Assignment # 3*/
#include<iostream>
#include"matrix.h"
#include"matrix.cpp"

using namespace std;

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

int main()
{

    cout<<"Enter the rows and cols of matrix "<<endl;
    int rows,cols,value;
    cin>>rows;
    cin>>cols;
    Matrix mat(rows, cols);
    Matrix mat2(rows,cols);
    cout<<"Enter the values of the matrix"<<endl;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            cin>>value;
            mat.setmatrix(i, j, value);
        }
    }

    cout<<"Second matrix enter values "<<endl;
    for(int i=0;i<rows;i++)
    {
        for(int j=0;j<cols;j++)
        {
            cin>>value;
            mat2.setmatrix(i, j, value);
        }
    }
    if(mat2 == mat)
    {
        cout<<"Both are same "<<endl;
    }
    else
    {
        cout<<"Matrices are not same "<<endl;
    }

    //mat=mat2;    // making the mats same = operator

    

    
    
    cout << "Matrix 1:" << endl;
    mat.display();
    cout << "Matrix 2:" << endl;
    mat2.display();

    
    
    
    /*cout << "Original Matrix:" << endl;
    mat.display();

    // Prefix increment
    ++mat;
    cout << "Matrix after prefix increment:" << endl;
    mat.display();

    // Postfix increment
    Matrix result = mat++;
    cout << "Matrix after postfix increment:" << endl;
    mat.display();
    cout << "Result of postfix increment:" << endl;
    result.display();*/

    return 0;
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

/*int main()
{
    Matrix mat(2, 2);
    mat.setmatrix(0, 0, 1);
    mat.setmatrix(0, 1, 2);
    mat.setmatrix(1, 0, 3);
    mat.setmatrix(1, 1, 4);

    cout << "Original Matrix:" << endl;
    mat.display();

    // Prefix increment
    ++mat;
    cout << "Matrix after prefix increment:" << endl;
    mat.display();

    // Postfix increment
    Matrix result = mat++;
    cout << "Matrix after postfix increment:" << endl;
    mat.display();
    cout << "Result of postfix increment:" << endl;
    result.display();

    return 0;
}
*/