#include<iostream>
#include<string.h>

using namespace std;

int Factorial(int n)
{
    if(n==0 || n==1)
    {
        return 1;
    }
    else
    {
        return (n*Factorial(n-1));
    }
}

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

bool LinearSearch(int array[10],int find, int size)
{

    if(array[size]==find)
    {
        return 1;
    }
    /*else if (array[size]<=0)
    {
        return 1;
    }*/
    else
    {
        return LinearSearch(array,find,size-1);
    }
   
}

bool elfish(char *word, char *elf, int index)
{

    if(elf[index]=='\0')
    {
        return 1;
    }
    else if(strchr(word,elf[index]))
    {
        return elfish(word,elf,index+1);
    }
    else
    {
        return 0;
    }

}