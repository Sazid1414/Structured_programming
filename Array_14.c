#include<stdio.h>
#include<stdlib.h>
int main()
{
    int serverUser[5][2]={1,14,2,28,3,19,4,8,5,15};
    int server;
    printf("Enter the number of server:");
    scanf("%d",&server);
    for(int i=0;i<5;i++)
    {
        if(server==serverUser[i][0])
        {
            printf("The number of user is:%d",serverUser[i][1]);
            abort();
        }
        
    }
    printf("The server not found");
    return 0;
}