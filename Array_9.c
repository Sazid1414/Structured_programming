#include<stdio.h>
int main()
{
    int n;
    
    printf("How many Days in a month:");
    scanf("%d",&n);
    double Array[n];
    for(int i=0;i<n;i++)
    {
        printf("Input the temperature of day %d:",i+1);
        scanf("%lf",&Array[i]);
    }
    double sum=0;
    for(int i=0;i<n;i++)
    {
        sum+=Array[i];
    }
    double Average=sum/n;
    double temp;
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-1-i;j++)
        {
            if(Array[j]>Array[j+1])
        {
            temp=Array[j];
            Array[j]=Array[j+1];
            Array[j+1]=temp;
        }
        }
    }
    printf("Maximum temperature:%lf\n",Array[n-1]);
    printf("Minimum Temperature:%lf\n",Array[0]);
    printf("Average Temperature:%lf\n",Average);
    return 0;
}