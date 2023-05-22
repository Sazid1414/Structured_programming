#include<Stdio.h>
int main()
{
   // int array1[10];
    int array2[10];
    int array1[]={1,2,3,4,5,6,7,8,9,10};
    for(int i=0;i<10;i++)
    {
        array2[i]=array1[i];
    }
    for(int i=0;i<10;i++)
    {
        printf("%d",array1[i]);
    }
    printf("\n");
    for(int i=0;i<10;i++)
    {
        printf("%d",array2[i]);
    }
    return 0;
}