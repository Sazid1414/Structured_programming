#include<stdio.h>
#include<string.h>
int main()
{
    //char *p1="one",*p2="two",*p3="three";
    char *p[3]={"one","Two","Three"};
    printf("%s %s %s\n",p[0],p[1],p[2]);
    printf("%s %s %s\n",p[0],p[2],p[1]);
    printf("%s %s %s\n",p[1],p[0],p[2]);
    printf("%s %s %s\n",p[1],p[2],p[0]);
    printf("%s %s %s\n",p[2],p[1],p[0]);
    printf("%s %s %s\n",p[2],p[0],p[1]);

  // printf("%s",p[2]);

}