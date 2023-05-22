#include<stdio.h>
int main()
{
    char text[10][80];
    int i;
    for(int i=0;i<10;i++)
    {
        printf("The %d th string:",i+1);
        gets(text[i]);
    }
    do
    {
        printf("Enter the number of String:");
        scanf("%d",&i);
       // i--;
        if(i-1>=0&&i-1<10)
        {
            printf("%s\n",text[i-1]);
        }
    } while (i-1>0);
    return 0;
    
}