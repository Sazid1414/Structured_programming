#include<stdio.h>
#include<string.h>
char text[][80]={ "when","in","the","course","of","human","event"," "};
int main()
{
    // for(int i=0;i<10;i++)
    // {
    //     printf(text[i]);
    // }
    for(int i=0;text[i][0];i++)
    {
        for(int j=0;text[i][j];j++)
        {
            printf("%c",text[i][j]);
        }
        printf(" ");
    }
    return 0;
}