#include<iostream>

using namespace std;

int findGCD(int num1,int num2)
{
   
   if(num2!=0)
   {
        return findGCD(num2,num1%num2);
   }
   else
   {
        return num1;
   }

}

int main()
{

    int num1,num2;

    cout<<"Enter the first number = ";
    cin>>num1;

    cout<<"Enter the second number = ";
    cin>>num2;

    cout<<"the gcd is = "<<findGCD(num1,num2);

    return 0;
}