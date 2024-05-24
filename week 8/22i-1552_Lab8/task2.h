#ifndef TASK2_H_
#define TASK2_H_

#include<iostream>
#include<string>

using namespace std;

class Facebook
{
    private:
        string name;
        string email;
        char gender;
        //char *number;
        int number;

    public:
        Facebook();
        //Facebook(string n,string e,char g, char* num);
        Facebook(string n,string e,char g,int num);

        void setname(string n);
        void setemail(string e);
        void setgender(char g);
        //void setnumber(char* num);
        void setnumber(int num);

        string getname();
        string getemail();
        int getnumber();
        char getgender();

        int updatenumber();

        void print();
        
};
/*void gendercountm(int mcount);
void gendercountf(int fcount);*/



#endif