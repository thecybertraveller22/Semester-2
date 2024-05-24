#include<iostream>

using namespace std;

int fibonacci(int x)
{
    if(x==0 || x==1)
    {
        return x;
    }
    else
    {     
        return (fibonacci(x-1)+fibonacci(x-2)); 
    }
}

int main()
{

    int num;

    cout<<"Enter until what number u want to print the fib series = ";
    cin>>num;

    cout<<"The fib sereis to this point is = ( "<<fibonacci(num)<<" )";


    return 0;
}