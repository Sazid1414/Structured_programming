#include<stdio.h>
int main()
{
    int array[3][3][3];
    for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            for(int k=0;k<3;k++)
            {
                printf("Enter the %d %d %d input:",i+1,j+1,k+1);
                scanf("%d",&array[i][j][k]);
            }
        }
    }
    
for(int i=0;i<3;i++)
    {
        for(int j=0;j<3;j++)
        {
            for(int k=0;k<3;k++)
            {
                printf("The %d %d %d input:",i+1,j+1,k+1);
                printf("%d\n",array[i][j][k]);
            }
        }
    }
    

}