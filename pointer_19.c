#include<stdio.h>
#include<string.h>
char *p[]={"Input exceeds field width","Out of Range","Printer not turned on","paper out","Disk Full","Disk write error"};
void printError(int err_num)
{
    printf(p[err_num]);
}
int main()
{
    int err_num;
    printf("Enter a number:");
    scanf("%d",&err_num);
    printError(err_num);
    return 0;
}