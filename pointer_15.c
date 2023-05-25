#include<stdio.h>
#include<string.h>
int main()
{
    char string1[]="Pointer is Fun";
    char string2[80],*p1,*p2;
    p1=string1;
    p2=string2;
    int i=0;
    int j=strlen(string1)-1;
    // while(p1>=string1)
    // {
    //     *p2++=*p1--;
    //    // *p1--;

    // }
    // while(j>0)
    // {
    //     p2[i]=p1[j];
    //     j--;
    //     i++;
    // }

    // p2[j+1]='\0';
    printf("%s",string2);
    // for(int i=0;i<strlen(string2);i++)
    // {
    //     printf("%c",p2[i]);
    // }
    return 0;
}