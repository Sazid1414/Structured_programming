#include<stdio.h>
int main()
{
    int array[10]={1,2,3,4,5,6,7,8,9,10};
    int *p;
    p=array;
    printf("%d %d %d ",*p,*(p+1),*(p+2));
    printf("%d %d %d ",array[0],array[1],array[2]);
    return 0;
}