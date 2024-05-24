#include<iostream>

using namespace std;

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

int main()
{

    int ***ptr = new int** [4];
    for(int i=0;i<4;i++)
    {
        ptr[i] = new int* [4];
        for(int j=0;j<4;j++)
        {
            ptr[i][j] = new int[4];
        }
    }
    
    cout << "Enter elements: " << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                cout << "Index " << i << "," << j << "," << k << " : ";
                cin >> ptr[i][j][k];
            }
        }

    }

    cout << "Stored Data: " << endl;
    for (int i = 0; i < 2; i++)
    {
        for (int j = 0; j < 2; j++)
        {
            for (int k = 0; k < 2; k++)
            {
                cout << ptr[i][j][k] << " ";
            }
            cout <<endl;
        }
        cout<<endl;
    }
    

    Square(ptr,2,2,2);

    return 0;
}