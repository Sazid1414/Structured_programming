#include<stdio.h>
#include<string.h>
char words[10][2][40]={"dog","Hund","No","Nein","year","jahr","child","kind","I","Ich","drive","fahren","house","house","haus","to","zu"," "," "};
int main()
{
    char english[80];
    printf("Enter English Word:");
    gets(english);
    int i=0;
    while(strcmp(words[i][0]," "))
    {
        if(!strcmp(english,words[i][0]))
        {
            printf("German translation :%s", words[i][1]);
            break;
        }
        i++;
    }
    if(!strcmp(words[i][0]," "))
    {
        printf("Not in dictionary!");
    }
    return 0;
}