#include<stdio.h>
#include<string.h>
int main()
{
    char string[1000];
    while(1)
    {
        gets(string);
        if(!strcmp(string,"quit"))
        {
            break;
        }
        else
        {
            printf("%s\n",strcat(string," bigstr"));
        }
    }
    return 0;
}