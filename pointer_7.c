#include<stdio.h>
#include<string.h>
char *appleColor[][2]={"Red Delicious","Red","Golden Delicious","Yellow","Winesap","Red","Gala","Raddish Orange","Lodi","Green","Mutsu","Yellow","Cortland","Red","Jonathan","Red"," "," "};
int main()
{
    char appleName[80];
    printf("Enter Apple Name:");
    gets(appleName);
    int i=0;
    while(i<9)
    {
        if((!strcmp(appleName,appleColor[i][0])))
     {printf("The apple color is:%s",appleColor[i][1]);
     return 0;}
    i++;
   

    }
    printf("Apple color not in the string table!");
    return 0;
}