/*Syed Arham Ahmed , BS-CY-B , 22i-1552 , Assignment # 3*/
#include "calender.h"
#include"calender.cpp"
#include<iostream>
#include<iomanip>
#include<ctime>

using namespace  std;

int main()
{
    int choice=0;
    
    

    Calender cal; // create a calendar object
    while(choice!=5)
    {
        cout<<endl;
        cout<<"Press 1 for displaying the calender"<<endl;
        cout<<"Press 2 for calculating the difference between 2 dates"<<endl;
        cout<<"Press 3 for calculating future date"<<endl;
        cout<<"Press 4 for calculating past date"<<endl;
        cout<<"Press 5 to exit the menue"<<endl;
        cout<<endl;

        cin>>choice;

        if(choice==1)
        {
            cal.display();
        }
        else if(choice==2)
        {
            cal.difference();
        }
        else if(choice==3)
        {
            cal.future_date();
        }
        else if(choice==4)
        {
            cal.past_date();
        }
        else if(choice==5)
        {
            cout<<"GOOD BYE !";
        }
    }
    
 
    return 0;
}
