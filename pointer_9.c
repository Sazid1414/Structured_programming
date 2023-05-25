#include<stdio.h>
int main()
{
    int *p,q;
    p=&q;
    q=1;
    printf("%p \n %d",p,q);
    p++;
    (*p)++;
    printf("\n %p \n %d",p,q);
    return 0;
}