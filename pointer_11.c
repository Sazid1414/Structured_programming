#include<stdio.h>
int main()
{
    float balance[5][3]={1,2,3,4,5,6,7,8,9,10,11,12,13,14,15};
    float *p;
    p=(float*) balance;//(float* is used for type cast)
    //to access balance[3][1]
    //*(p+numOfRow*elementRow+elementColumn)
    printf("%f",*(p+(3*3)+1));
    return 0;
}