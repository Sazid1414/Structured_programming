#include<stdio.h>
#include<conio.h>
#include<string.h>
int main()
{
    char ch;
    printf("Enter a character:");
    scanf("%c",&ch);
    //getche();
    
    // scanf("%c",&ch);
    switch (ch)
    {
    case 'a':
    case 'e':
    case 'i':
    case 'o':
    case 'u':
    printf("\nYou have Entered a Vowel.");
        break;
    
    default:
        printf("\nYour choice is not a vowel.");
        break;
    }

}