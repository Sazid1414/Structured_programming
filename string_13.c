#include<stdio.h>
#include<string.h>
char word[][80]={"Sazid","Mahin","Jemima","Queen","Icecream","Bou","teddy","","HM","Jemim"};
int main()
{
    int i;
    printf("Enter a number 1 to 9:");
    scanf("%d",&i);
    printf("%s\n",word[i-1]);
    return 0;
}