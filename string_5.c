#include<stdio.h>
#include<stdlib.h>
#include<string.h>
int main()
{
    char command[80],temp[80];
    int i,j;
    while(1)
    {
        printf("Operation?:");
        gets(command);
        if(!strcmp(command,"quit"))
        {
            break;
        }
        printf("Enter the first number:");
        gets(temp);
        i=atoi(temp);
        printf("Enter the second number:");
        gets(temp);
        j=atoi(temp);
        if(!strcmp(command,"add"))
        {
            printf("%d",i+j);
        }
        else if(!strcmp(command,"substract"))
        {
            printf("%d",i-j);
        }
        else if(!strcmp(command,"multiply"))
        {
            printf("%d",i*j);
        }
        else if(!strcmp(command,"division"))
        {
            printf("%d",i/j);
        }

    }
    return 0;
}