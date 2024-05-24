/*Syed Arham Ahmed , BS-CY-B , 22i-1552 , Assignment # 3*/

#ifndef CALENDER_H_H
#define CALENDER_H_H

class Date;

class Calender
{
    public:
        void display();// displays the calender of the year and month that the user has input(by default system is read)
        void difference(); // take user input for dates and then calcultae the diiff
        void future_date();
        void past_date();

    private:
        friend class Date; 
        //friend class Date; 
};

class Date
{
    public:
        int month;
        int day;
        int year;
        Date();
        Date(int m,int d,int y);
        /*friend void Calender::display();
        friend void Calender::difference();*/
        friend class Calender;
};

#endif
