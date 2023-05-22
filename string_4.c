#include<stdio.h>
#include<string.h>
void main()
{
   char string1[]="password";
   char string2[]="Password";
   printf("%d\n",strcmp(string1,string2));
   printf("%d",strlen(string1));

}