#include<stdio.h>
#include<math.h>
#define PI 3.1416
void main()
{
    int n=20;
    float x,y,sum;
    printf("Input an angle in Degree (x):");
    scanf("%f",&x);
    x=x * PI / 180.0 ;//Convert to radian
    sum=1;y=1;
    for(int i=1;i<x+1;i++)
    {
        //niton book page 170 example 1
        y=y*pow((-1),2*i-1)*x*x/(2*i*(2*i-1));
        sum=sum+y;
    }
    printf("cos(x)=%f",sum);


}