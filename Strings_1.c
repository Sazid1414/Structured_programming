#include<stdio.h>
int main()
{
    char message[80];
    printf("Enter a string (less than 80 char):");
    gets(message);
    // for(int i=0;message[i];i++)
    // {
    //     printf("%c",message[i]);
    // }
    printf(message);
    //printf("%s\n",message);
    return 0;
}