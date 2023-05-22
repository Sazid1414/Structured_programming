#include<stdio.h>
#include<conio.h>
int main()
{   
    //message encryption
    char message[80];
    printf("Enter a message of equal or less than 80 character:");
    //int i=0;
   for(int i=0;i<80;i++)
    {
        message[i]=getche();
        //scanf("%c",&message[i]);
        if(message[i]=='\r')
        { 
            break;
        }
        printf("\n");
    }
    for(int i=0;message[i]!='\r';i++)
    {
        printf("%c",message[i]+1);

    }


    return 0;
}