/*Syed Arham Ahmed , 22i-1552 , BS_CY_B, Assignement # 2*/
#include "string.h"
#include<iostream>
#include<string>
#include<cstring>

using namespace std;

String::String()
{
    str = "";
}

String::String(char *s)
{
    this->str = s;
}

String::String(const String &copy)
{
    str = copy.str;
}

String::String(int x)
{
    str = std::string(x, ' ');
}

char String::getAt(int i)
{
    if(i<0 || i>=str.length())
    {
        return '\0';
    }
    
    return str[i];
}

void String::setAt(int i,char c)
{
    str[i] = c;
}

String::String(string s)
{
    str = s;
}

String String::substr(int pos,int len)
{
    return String(str.substr(pos,len));
}

String String::substr(int pos)
{
    return String(str.substr(pos));
}

void String::append(char a)
{
    string single(1,a);

    str.append(single);
}

void String::append(String str)
{
    str.append(str);
}

void String::append(char *str)
{
    string newstr(str);

    this->str.append(newstr);
}

int String::length()
{
    return str.length();
}

char* String::tocstring()
{
    char* cstr = new char[str.length() + 1];

    strcpy(cstr, str.c_str());

    cstr[str.length()] = '\0';

    return cstr;
}

void String::display()
{
    cout<<"The string is = "<<str<<endl;
}

bool String::isEmpty()
{
    if(str.length()==1)
    {
        if(str==" ")
        {
            return true;
        }
        else 
        {
            return false;
        }
    }

    return false;
}

void String::copy(const String &)
{
    string str2 = str; 
}

void String::copy(const char* cstr)
{
    string str(cstr);
}

int String::find(char x)
{
    return str.find(x);
}

bool String::equal(String compare_str)
{
    if(str.compare(compare_str.str)==0)
    {
        return true;
    }
    else
    {
        return false;
    }
}

int String::stoi(string s)
{
    int num = stoi(s);

    return 0;
}


String String::operator+(const String& str) const
{
    String result(str);
    result.append(this->str);
    return result;
}


