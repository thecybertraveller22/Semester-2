#include<iostream>

using namespace std;

bool LinearSearch(int array[10],int find, int size)
{

    if(array[size]==find)
    {
        return find;
    }
    else if (array[size]<=0)
    {
        return find;
    }
    else
    {
        return LinearSearch(array,find,size--);
    }

    return 1;
   
}

int main()
{
    int size=10;
    int array[size] = {1,2,3,4,5,6,7,8,9,10};
    int find;

    cout<<"Enter what u want to find = ";
    cin>>find;

    cout<<LinearSearch(array,find,size);

    return 0;
}