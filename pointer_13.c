#include<stdio.h>
#include<ctype.h>

int main()
{
    
    /*Approach -1
    char str[80];
    int i=0;
    printf("Enter a String:");
    gets(str);
    while(str[i])
    {
        printf("%c",toupper(str[i]));
        i++;
    }
    printf("\n");
    i=0;
    while(str[i])
    {
        printf("%c",tolower(str[i]));
        i++;
    }
    return 0;*/
    char str[80],*p,*temp;
    printf("Enter a string:");
    gets(str);
    p=str;
    temp=str;
    // while(*temp)
    // {
    //     *temp=tolower(*temp);
    //     temp++;
    // }
    // printf("%s",str);
    int i=0;
    // while(temp[i])
    // {
    //     printf("%c",toupper(temp[i]));
    //     i++;
    // }
    while(temp[i])
    {
       temp[i]=toupper(temp[i]);
        i++;
    }
    printf("%s",str);
    printf("\n");
    while(*temp)
    {
        *temp=tolower(*temp);
        temp++;
        //professional programmer write like this *temp++=toupper(*p)
    }
    printf("%s",str);
    return 0;
    
}