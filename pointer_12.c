#include<stdio.h>
int main()
{
    char ch[]="pointers are fun";
    char *p;
    p=ch;
    int i=0;
    while(p[i]!=0)
    {
        //we can use indexing in pointer when the pointer points to an array
       printf("%c",p[i]);
       // printf("%c",*(p[i]));we cannot use * because it is char type
        i++;
    }
    return 0;
}