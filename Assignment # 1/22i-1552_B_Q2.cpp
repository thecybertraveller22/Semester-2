#include<iostream>

using namespace std;

char* toupper(char* ch)
{
    char* ptr = new char[30];  // Allocate memory for the result
    char* ans = ptr;

    while (*ch)
    {
        if (*ch >= 97 && *ch <= 122) // checking the lower case letter using ascii values
        {
            *ans = *ch - 32;  // Convert lowercase letter to uppercase
        }
        else
        {
            *ans = *ch;  // copy the letters which are not alphabets
        }

        ch++;
        ans++;
    }

    return ptr;
}

char* tolower(char* ch)
{
    char* ptr = new char[30];  // Allocate memory for the result
    char* ans = ptr;

    while (*ch)
    {
        if (*ch >= 65 && *ch <= 90) // checking the upper case letter using ascii values
        {
            *ans = *ch + 32;  // Convert uppercase letter to lowercase
        }
        else
        {
            *ans = *ch;  // copy the letters which are not alphabets
        }

        ch++;
        ans++;
    }

    return ptr;
}

char* isspace(const char* ch)
{
    //char* ptr = new char[30];  // Allocate memory for the result
    //char* ans = ptr;
    char *ans = new char [1];

    while (*ch)
    {
        if (*ch == 32 || *ch == '\r' || *ch == '\n' || *ch == '\t' || *ch == '\f' || *ch == '\v') 
        {
            *ans = '1';
              
        }
        else
        {
            *ans = '0';
        }
    }
    return ans;
}

int main()
{
	//char sentence[] = "hello man";
    //char  *ptr = sentence;
    int choice=0;

    char *sentence = new char [30];

    cout<<"Enter a sentence "<<endl;
    cin.getline(sentence, 30);
    
    cout<<"Press 1 for lower to upper case conversion"<<endl;
    cout<<"Press 2 for upper to lower case conversion"<<endl;
    cout<<"Press 3 for checking if the sentence is a blank space or has words in it"<<endl;

    cin >> choice;
    
    if(choice == 1)
    {
        cout<<toupper(sentence);
    }
    
    else if(choice == 2)
    {
        cout<< tolower(sentence);
    }

    else if(choice == 3)
    {
        cout<< isspace(sentence);
    }
    
    


    //cout<<"the sentence is =  "<<toupper(sentence)<<endl;
    
   // delete[] sentence;
}
