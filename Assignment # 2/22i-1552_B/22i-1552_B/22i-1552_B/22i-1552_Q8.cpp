/*Syed Arham Ahmed , 22i-1552 , BS_CY_B, Assignement # 2*/
#include "string.h"
#include<iostream>
#include<string>
#include<cstring>

using namespace std;

int main()
{
    String s1("Hello");
    String s2("World");
    String s3 = s1 + s2;

    s3.display();

    cout<<"Length of s3 = "<<s3.length()<<endl;

    cout<<"Substring of s3 from 2 to 5 = ";
    String sub = s3.substr(2,5);
    sub.display();

    cout<<"String s3 after appending '!' = ";
    s3.append('!');
    s3.display();

    cout<<"String s3 after appending ' world' = ";
    s3.append(" world");
    s3.display();

    cout<<"s1 and s2 are equal: "<<s1.equal(s2)<<endl;
    cout<<"s1 and s1 are equal: "<<s1.equal(s1)<<endl;

    string num_str = "1234";
    int num = s1.stoi(num_str);
    cout<<"Converted string "<<num_str<<" to integer "<<num<<endl;

    return 0;
}
