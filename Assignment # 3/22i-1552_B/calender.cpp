/*Syed Arham Ahmed , BS-CY-B , 22i-1552 , Assignment # 3*/
#include"calender.h"
#include<iostream>
#include<iomanip>
#include<ctime>

using namespace std;

Date::Date()
{
    day=1;
    month=1;
    year=2023;
}

Date::Date(int m,int d,int y)
{
    month = m;
    day = d;
    year = y;
}

void Calender::difference()
{
    Date date1,date2;
    int diff_month,diff_days;

    cout<<"Enter the day,month,year"<<endl;
    cin>>date1.day;
    cin>>date1.month;
    cin>>date1.year;

    cout<<"Enter the second day,month,year"<<endl;
    cin>>date2.day;
    cin>>date2.month;
    cin>>date2.year;

    if(date1.year == date2.year)
    {
        cout<<"Year is same ( "<<date1.year<<" )"<<endl;
        
        if(date1.month > date2.month)
        {
            diff_month = date1.month - date2.month;
        }
        else
        {
             diff_month = date2.month - date1.month;
        }

        cout<<"The diff of months is  = "<<diff_month<<endl;

        int days_in_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int days_in_year = 365;

        // Check for leap year
        if (date1.year % 4 == 0 && (date1.year % 100 != 0 || date1.year % 400 == 0)) 
        {
            days_in_month[1] = 29;
            days_in_year = 366;
        }

        // Calculate the number of days in the first date
        int days1 = 0;
        for (int i = 0; i < date1.month - 1; i++) 
        {
            days1 += days_in_month[i];
        }
        days1 += date1.day;

        // Calculate the number of days in the second date
        int days2 = 0;
        for (int i = 0; i < date2.month - 1; i++)
        {
            days2 += days_in_month[i];
        }
        days2 += date2.day;

        // Calculate the difference in days
        diff_days = days2 - days1;

        // If the difference is negative, add the number of days in the year
        if (diff_days < 0) 
        {
            diff_days += days_in_year;
        }

        //cout << "The difference between the two dates is " << diff_days << " days." << endl;
        /*else 
        {
            cout << "The two dates are not in the same year." << endl;
        }*/
        cout << "The diff of days is  = " << diff_days << endl;

    }
    else 
    {
        cout<<"Years not same"<<endl;
        int days_in_month[] = {31, 28, 31, 30, 31, 30, 31, 31, 30, 31, 30, 31};
        int days_in_year = 365;
        int diff_year,diff_month_final;
        int diff_month;

        if(date1.year>date2.year)
        {
            diff_year = date1.year-date2.year;

            diff_month = 12-date2.month;

            if(diff_year>1)
            {
                diff_month_final = diff_month + (12*(diff_year-1))+date1.month;
            }
            else
            {
                diff_month_final = diff_month + date1.month;
            }
        }
        else
        {
            diff_year = date2.year-date1.year;

            diff_month = 12-date1.month;

            if(diff_year>1)
            {
                diff_month_final = diff_month + (12*(diff_year-1))+date2.month;
            }
            else
            {
                diff_month_final = diff_month + date2.month;
            }
        }

        /*for(int i=0;i<diff_year;i++)
        {
            if(diff_year>1)
            {
                cout<<"Here"<<endl;
                diff_month_final = diff_month + (12*diff_year);
            }
            else
            {
                cout<<"HALLOOOOOOOO"<<endl;
                diff_month_final = diff_month + date2.month;
            }
             
        }*/
        
        cout<<"The diff in years = "<<diff_year<<endl;
        //cout<<"diff_month = "<<diff_month<<endl;
        cout<<"The diff in months = "<<diff_month_final<<endl;
        

        // Check for leap year
        if (date1.year % 4 == 0 && (date1.year % 100 != 0 || date1.year % 400 == 0)) 
        {
            days_in_month[1] = 29;
            days_in_year = 366;
        }
    }

}

void Calender::display()
{
    /*time_t tt;
    struct tm*ti;
    time(&tt);
    ti=localtime(&tt);

    cout<<asctime(ti);*/

    time_t t = time(NULL);
    tm* timeptr = localtime(&t);

    int year = timeptr->tm_year+1900; // getting the current year
    int month = timeptr->tm_mon + 1; // getting the current month

    cout << "    " << setw(2) << month << " " << year << endl;
    cout << " Su  Mo  Tu  We  Th  Fr  Sa" << endl;
    cout << "---------------------------" << endl;

    tm firstday=*timeptr;
    firstday.tm_mday=1;
    mktime(&firstday);

    int week_day = firstday.tm_wday; // finding the first day
    int month_days = 31;

    if(month==4||month==6||month==9||month==11) // setting the days per month 
    {
        month_days = 30;
    }
    else if(month==2)
    {
        if(year%4==0 && (year%100!=0 || year%400==0))
        {
            month_days=29;
        }
        else
        {
            month_days=28;
        }
    }

    int month_day=1;

    for(int i=0;i<6;i++)
    {
        for(int j=0;j<7;j++)
        {
            if(i==0 && j<week_day)
            {
                cout<< "    ";
            }
            else if(month_day>month_days)
            {
                break;
            }
            else
            {
                cout<<" ";
                
                if(month_day<10)
                {
                    cout<<" ";
                }
                cout<<month_day<<" ";
                //printf("%3d", month_day);
                month_day++;
            }
        }
        cout<<endl;
        
        if(month_day>month_days)
        {
            break;
        }
    }
    /*for (int i = 1; i <= 6; i++) {
        for (int j = 1; j <= 7; j++) {
            if (i == 1 && j < month_days)
                cout << "   ";
            else if (month_day > month_days)
                break;
            else {
                printf("%3d", month_day);
                month_day++;
            }
        }
        cout << endl;
        if (month_day > month_days)
            break;
    }*/
    cout<<endl;
    cout<<"Now lets print the calender that you demand "<<endl;
    cout<<endl;
    //cout<<endl;

    int yee, mee, dee;
    cout << "Enter year: ";
    cin >> yee;
    cout << "Enter month: ";
    cin >> mee;

    // Calculate the starting day of the month using Zeller's congruence formula
    int q = 1;
    if (mee < 3) 
    {
        mee += 12;
        yee--;
    }
    int k = yee % 100;
    int j = yee / 100;
    int h = (q + 13*(mee+1)/5 + k + k/4 + j/4 + 5*j) % 7;
    dee = (h + 5) % 7 + 1;

    // Print the calendar header
    cout << " Mo Tu We Th Fr Sa Su" << endl;
    cout << "---------------------" << endl;

    // Print the dates for the given month and year
    int daysInMonth;
    if (mee == 2) 
    {
        if ((yee % 4 == 0 && yee % 100 != 0) || yee % 400 == 0)
        {
            daysInMonth = 29;
        }
        else
        {
            daysInMonth = 28;
        }
    }
    else if (month == 4 || month == 6 || month == 9 || month == 11)
    {
        daysInMonth = 30;
    }
    else
    {
        daysInMonth = 31;
    }

    int date = 1;
    
    for (int i = 1; i <= 6; i++) 
    {
        for (int j = 1; j <= 7; j++) 
        {
            if (i == 1 && j < dee)
            {
                cout << "   ";
            }
            else if (date > daysInMonth)
            {
                break;
            }
            else 
            {
                printf("%3d", date);
                date++;
            }
        }
        cout << endl;
        if (date > daysInMonth)
        {
            break;
        }
           
    }	
}

void Calender::future_date()
{
    Date current_date,new_date;
    int c=0;

    cout<<"Enter the day,month,year"<<endl;
    cin>>current_date.day;
    cin>>current_date.month;
    cin>>current_date.year;


    int days_in_month = 31; // assuming 31 days in every month

    if (current_date.month == 2) 
    {
        if ((current_date.year % 4 == 0 && current_date.year % 100 != 0) || current_date.year % 400 == 0) 
        {
            days_in_month = 29; // leap year
        }
        else 
        {
            days_in_month = 28; // non-leap year
        }
    } 
    else if (current_date.month == 4 || current_date.month == 6 || current_date.month == 9 || current_date.month == 11) 
    {
        days_in_month = 30; // April, June, September, November
    }

    cout<<"Do u want to add days(1) or months(2)"<<endl;
    cin>>c;

    if(c==2)
    {
        cout<<"Enter months = ";
        cin>>new_date.month;

        cout<<"The start date is = "<<current_date.day<<"/"<<current_date.month<<"/"<<current_date.year<<endl;

        current_date.month+=new_date.month;

        if(current_date.month/12 > 0)
        {
            cout<<"New year started"<<endl;

            new_date.year = current_date.year + current_date.month/12;
        }
        cout<<"The new date is = "<<current_date.day<<"/"<<(new_date.month-(12*(new_date.year-current_date.year)))+1<<"/"<<new_date.year<<endl;
    }
    else if(c==1)
    {
        cout << "Enter number of days: ";
        cin >> new_date.day;

        // add the days to the current date
        int days_left = days_in_month - current_date.day;

        while (new_date.day > days_left)
        {
            new_date.day -= days_left + 1;
            current_date.month++;

            if (current_date.month > 12) 
            {
                current_date.month = 1;
                current_date.year++;
            }

            days_in_month = 31; // assuming 31 days in every month

            if (current_date.month == 2) 
            { 
                if ((current_date.year % 4 == 0 && current_date.year % 100 != 0) || current_date.year % 400 == 0) 
                {
                    days_in_month = 29; // leap year
                } 
                else 
                {
                    days_in_month = 28; // non-leap year
                }
            } 
            else if (current_date.month == 4 || current_date.month == 6 || current_date.month == 9 || current_date.month == 11) 
            {
                days_in_month = 30; // April, June, September, November
            }
            days_left = days_in_month - current_date.day;
        }
        current_date.day += new_date.day;

        if (current_date.day > days_in_month) 
        {
            current_date.day -= days_in_month;
            current_date.month++;

            if (current_date.month > 12) 
            {
                current_date.month = 1;
                current_date.year++;
            }
        }

        cout<<"The new date is = "<<current_date.day<<"/"<<current_date.month<<"/"<<current_date.year<<endl;

        
    }
}

void Calender::past_date()
{
    Date current_date, new_date;
    int c = 0;

    cout << "Enter the day, month, year: " << endl;
    cin >> current_date.day >> current_date.month >> current_date.year;

    int days_in_month = 31; // assuming 31 days in every month

    if (current_date.month == 2)
    {
        if ((current_date.year % 4 == 0 && current_date.year % 100 != 0) || current_date.year % 400 == 0)
        {
            days_in_month = 29; // leap year
        }
        else
        {
            days_in_month = 28; // non-leap year
        }
    }
    else if (current_date.month == 4 || current_date.month == 6 || current_date.month == 9 || current_date.month == 11)
    {
        days_in_month = 30; 
    }

    cout << "Do you want to subtract days(1) or months(2)? " << endl;
    cin >> c;

    if (c == 2)
    {
        cout << "Enter months: ";
        cin >> new_date.month;

        cout << "The start date is: " << current_date.day << "/" << current_date.month << "/" << current_date.year << endl;

        current_date.month -= new_date.month;

        while (current_date.month < 1)
        {
            current_date.month += 12;
            current_date.year--;
        }

        cout << "The new date is: " << current_date.day << "/" << current_date.month << "/" << current_date.year << endl;
    }
    else if (c == 1)
    {
        /*cout << "Enter number of days: ";
        cin >> new_date.day;

        // subtract the days from the current date
        int days_left = current_date.day - 1;

        while (new_date.day > days_left)
        {
            new_date.day -= days_left;
            current_date.month--;

            if (current_date.month < 1)
            {
                current_date.month = 12;
                current_date.year--;
            }

            days_in_month = 31; // assuming 31 days in every month

            if (current_date.month == 2)
            {
                if ((current_date.year % 4 == 0 && current_date.year % 100 != 0) || current_date.year % 400 == 0)
                {
                    days_in_month = 29; // leap year
                }
                else
                {
                    days_in_month = 28; // non-leap year
                }
            }
            else if (current_date.month == 4 || current_date.month == 6 || current_date.month == 9 || current_date.month == 11)
            {
                days_in_month = 30; // April, June, September, November
            }

            days_left = days_in_month;
        }
        current_date.day -= new_date.day;

        if (current_date.day < 1)
        {
            current_date.month--;

            if (current_date.month < 1)
            {
                current_date.month = 12;
                current_date.year--;
            }

            days_in_month = 31; // assuming 31 days in every month

            if (current_date.month == 2)
            {
                if (current_date.year % 4 == 0 && current_date.year % 100 != 0)
                {
                    days_in_month = 29; // leap year
                }
                else
                {
                    days_in_month = 28; // non-leap year
                }
            }  
            else if(current_date.month == 4 || current_date.month == 6 || current_date.month == 9 || current_date.month == 11)
            {
                days_in_month = 30; // April, June, September, November
            }

            current_date.day += days_in_month;
            cout << "The new date is: " << current_date.day - new_date.day << "/" << current_date.month << "/" << current_date.year << endl;
        }
        else
        {
            cout << "Invalid input." << endl;
        }*/



        //--------------------------
        //--------------------------

        /*cout << "Enter number of days: ";
        cin >> new_date.day;

        // get the total number of days in the current month
        int days_in_month = 31; // assuming 31 days in every month
        if (current_date.month == 2)
        {
            if ((current_date.year % 4 == 0 && current_date.year % 100 != 0) || current_date.year % 400 == 0)
            {
                days_in_month = 29; // leap year
            }
            else
            {
                days_in_month = 28; // non-leap year
            }
        }
        else if (current_date.month == 4 || current_date.month == 6 || current_date.month == 9 || current_date.month == 11)
        {
            days_in_month = 30; // April, June, September, November
        }

        // subtract the current day from the total number of days in the month
        int days_left = days_in_month - current_date.day;

        // subtract additional days from new_date and update current_date
        while (new_date.day > days_left)
        {
            new_date.day -= days_left + 1; // add back the current day
            current_date.month--;

            if (current_date.month < 1)
            {
                current_date.month = 12;
                current_date.year--;
            }

            days_in_month = 31; // assuming 31 days in every month

            if (current_date.month == 2)
            {
                if ((current_date.year % 4 == 0 && current_date.year % 100 != 0) || current_date.year % 400 == 0)
                {
                    days_in_month = 29; // leap year
                }
                else
                {
                    days_in_month = 28; // non-leap year
                }
            }
            else if (current_date.month == 4 || current_date.month == 6 || current_date.month == 9 || current_date.month == 11)
            {
                days_in_month = 30; // April, June, September, November
            }

            days_left = days_in_month;
        }

        // subtract the remaining days from new_date
        current_date.day -= new_date.day;

        // adjust current_date if necessary
        if (current_date.day < 1)
        {
            current_date.month--;

            if (current_date.month < 1)
            {
                current_date.month = 12;
                current_date.year--;
            }

            days_in_month = 31; // assuming 31 days in every month

            if (current_date.month == 2)
            {
                if (current_date.year % 4 == 0 && current_date.year % 100 != 0)
                {
                    days_in_month = 29; // leap year
                }
                else
                {
                    days_in_month = 28; // non leap
                }

            }
        }
        cout << "The new date is: " << current_date.day - new_date.day << "/" << current_date.month << "/" << current_date.year << endl;*/
    
        cout << "Enter number of days: ";
        cin >> new_date.day;

        // get the total number of days in the current month
        int days_in_month = 31; // assuming 31 days in every month
        if (current_date.month == 2)
        {
            if ((current_date.year % 4 == 0 && current_date.year % 100 != 0) || current_date.year % 400 == 0)
            {
                days_in_month = 29; // leap year
            }
            else
            {
                days_in_month = 28; // non-leap year
            }
        }
        else if (current_date.month == 4 || current_date.month == 6 || current_date.month == 9 || current_date.month == 11)
        {
            days_in_month = 30; // April, June, September, November
        }

        // subtract the current day from the total number of days in the month
        int days_left = days_in_month - current_date.day;

        // subtract additional days from new_date and update current_date
        while (new_date.day > days_left)
        {
            new_date.day -= days_left + 1; // add back the current day
            current_date.month--;

            if (current_date.month < 1)
            {
                current_date.month = 12;
                current_date.year--;
            }

            days_in_month = 31; // assuming 31 days in every month

            if (current_date.month == 2)
            {
                if ((current_date.year % 4 == 0 && current_date.year % 100 != 0) || current_date.year % 400 == 0)
                {
                    days_in_month = 29; // leap year
                }
                else
                {
                    days_in_month = 28; // non-leap year
                }
            }
            else if (current_date.month == 4 || current_date.month == 6 || current_date.month == 9 || current_date.month == 11)
            {
                days_in_month = 30; 
            }

            days_left = days_in_month - 1; // subtract current day
        }

        // subtract the remaining days from new_date
        current_date.day -= new_date.day;

        // adjust current_date if necessary
        if (current_date.day < 1)
        {
            current_date.month--;

            if (current_date.month < 1)
            {
                current_date.month = 12;
                current_date.year--;
            }

            days_in_month = 31; // assuming 31 days in every month

            if (current_date.month == 2)
            {
                if (current_date.year % 4 == 0 && current_date.year % 100 != 0)
                {
                    days_in_month = 29; // leap year
                }
                else
                {
                    days_in_month = 28; // non leap
                }

            }
            else if (current_date.month == 4 || current_date.month == 6 || current_date.month == 9 || current_date.month == 11)
            {
                days_in_month = 30; 
            }

            current_date.day += days_in_month;
        }

        cout << "The new date is: " << current_date.day << "/" << current_date.month << "/" << current_date.year << endl;

    }    

                
                            
                
}
    
         
        


/*int main()
{
    Calender cal; // create a calendar object
    //cal.display(); // call the display function to display the calendar
    //cal.difference();
    //cal.future_date();
    cal.past_date();

    return 0;
}*/
