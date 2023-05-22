#include<stdio.h>
#include<string.h>
int main()
{
    char text[10][40];
    for(int i=0;i<10;i++)
    {
        printf("Enter the %d string:",i+1);
        gets(text[i]); 
    }
    
}