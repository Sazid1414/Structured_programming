#include<stdio.h>
#include<string.h>
void main()
{
    char *p="stop";
    char string[80];
    do{
        printf("Enter a string:");
        gets(string);
    }
    while(strcmp(p,string));
    //return 0;

}