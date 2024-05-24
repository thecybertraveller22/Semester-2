/*Syed Arham Ahmed , 22i-1552 , BS_CY_B, Assignement # 2*/
#include<iostream>
#include<iomanip>

using namespace std;

class Student 
{
    private:
        char *roll_num;
        char *name;
        int batch;
        int course_code[5];
        char *course_name[5];
        char course_grades[5];
        float cgpa;
        char *degree;
        char *dob;

    public:

        Student()
        {
            roll_num = new char [30];
            name = new char [30];
            batch = 22;
            cgpa = 2.7;
            degree = new char [30];
            dob = new char [30];

            for(int i=0;i<5;i++)
            {
                course_code[i] = 0;
                course_name[i] = nullptr;
                course_grades[i] = ' ';
            }
        }

        Student(char *r, char *n, int b, int c_code,char c_grades,char *c_name, float g,char *deg,char *d)
        {
            roll_num = r;
            name = n;
            batch = b;
            cgpa = g;
            degree = deg;
            dob = d;

            for(int i=0;i<5;i++)
            {
                course_code[i] = c_code;
                course_grades[i] = c_grades;
                course_name[i] = c_name;
            }
        }

        /*void studentdemo()
        {
            Student s1;

            s1.setvalues();
            s1.display();
        }*/

        void setvalues()
        {
            cout<<"Enter the name = ";
            cin.getline(name,30);

            cout<<"Enter your roll number = ";
            cin.getline(roll_num,30);

            cout<<"Enter your batch = ";
            cin>>batch;

            cout<<"Enter your CGPA = ";
            cin>>cgpa;

            cout<<"Enter your date of birth = ";
            cin.ignore();
            cin.getline(dob,30);

            cout<<"Enter your degree = ";
            cin.getline(degree,30);

            cout<<"Enter your course codes  "<<endl;
            for(int i=0;i<5;i++)
            {
                cin>>course_code[i];
            }

            cout<<"Enter your course grades "<<endl;
            for(int i=0;i<5;i++)
            {
                cin>>course_grades[i];
            }

            cout<<"Enter course names "<<endl;
            for(int i=0;i<5;i++)
            {
                course_name[i] = new char [30];
                cin>>course_name[i];
            }
        }

        void display()
        {
            cout<<"-----------------------------------------------------------------------------------------------------------------------"<<endl;
            cout<<"Student Name:    "<<name;
            cout<<setw(83)<<"Roll No:    "<<roll_num<<endl;
            cout<<"Date of Birth:   "<<dob;
            cout<<setw(25)<<"Univ.Reg.No:   "<<roll_num;
            cout<<setw(51)<<"Degree:     "<<degree<<endl;
            cout<<"-----------------------------------------------------------------------------------------------------------------------"<<endl;
            cout<<setw(50)<<"Fall 2023"<<endl;

            cout<<"Code"<<setw(25)<<"Course Title"<<setw(50)<<"crd"<<setw(5)<<"Pnt"<<setw(10)<<"Grd"<<setw(5)<<"Rmk"<<endl;
            
            for(int i=0;i<5;i++)
            {
                if(course_grades[i]=='A')
                {
                    cout<<course_code[i]<<setw(25)<<course_name[i]<<setw(50)<<"3"<<setw(6)<<" 4.00"<<setw(10)<<course_grades[i]<<setw(5)<<"NC"<<endl;
                }
                else if(course_grades[i]=='B')
                {
                    cout<<course_code[i]<<setw(25)<<course_name[i]<<setw(50)<<"3"<<setw(6)<<" 3.67"<<setw(10)<<course_grades[i]<<setw(5)<<"NC"<<endl;
                }
                else if(course_grades[i]=='C')
                {
                    cout<<course_code[i]<<setw(25)<<course_name[i]<<setw(50)<<"3"<<setw(6)<<" 2.67"<<setw(10)<<course_grades[i]<<setw(5)<<"NC"<<endl;
                }
                else if(course_grades[i]=='D')
                {
                    cout<<course_code[i]<<setw(25)<<course_name[i]<<setw(50)<<"3"<<setw(6)<<" 1.67"<<setw(10)<<course_grades[i]<<setw(5)<<"NC"<<endl;
                }
                else if(course_grades[i]=='F')
                {
                    cout<<course_code[i]<<setw(25)<<course_name[i]<<setw(50)<<"3"<<setw(6)<<" 0.00"<<setw(10)<<course_grades[i]<<setw(5)<<"NC"<<endl;
                }
            }

            cout<<"-----------------------------------------------------------------------------------------------------------------------"<<endl;
            cout<<"Credits Attempted = 12"<<setw(50)<<"GPA = "<<cgpa<<endl;
            cout<<"Credits Earned    = 12"<<setw(50)<<"CGPA = "<<cgpa<<endl;
        }

        
};

int main()
{

    //studentdemo();

    Student s1;

    s1.setvalues();
    s1.display();


    return 0;
}