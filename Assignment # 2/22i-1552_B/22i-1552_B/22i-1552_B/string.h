/*Syed Arham Ahmed , 22i-1552 , BS_CY_B, Assignement # 2*/
#ifndef STRING_H
#define STRING_H

class String
{
    private:
        string str;
    public:
        String();
        String(char *str);
        String(const String &copy);
        String(int x);
        String(string s);
        char getAt(int i);
        void setAt(int i, char c);
        String substr(int pos, int len);
        String substr(int pos);
        void append(char a);
        void append(String str);
        void append(char *str);
        int length();
        char *tocstring();
        void display();
        bool isEmpty();
        void copy(const String&);
        void copy(const char* cstr);
        int find(char x);
        bool equal(String);
        int stoi(string s);
        ~String();
        String operator+(const String& str) const;
};

#endif 




