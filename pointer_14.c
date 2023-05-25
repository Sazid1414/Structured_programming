#include<stdio.h>
#include<string.h>
int main()
{
    char string[80],*p1,*p2,string2[80];
    printf("Enter a string:");
    gets(string);
    //p1=string;
    p1=string2+strlen(string)-1;
    p2=string2;
    while(p1>=string)
    {
        *p2++=*p1--;
    }
    *p2='\0';
    printf("%s %s",string,string2);
    return 0;
}