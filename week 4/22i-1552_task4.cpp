#include<iostream>
#include<string.h>

using namespace std;

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

int main()
{
    int index;

    char word[10] = "waffles";
    char elf[3] = {'e','l','f'};

    cout<<elfish(word,elf,index);

    return 0;
}