#include<stdio.h>
#include<string.h>
#include<ctype.h>
int main()
{
    int vowel,consonant,digit,word,other;
    vowel=consonant=digit=word=other=0;
    char string[80];
    printf("Enter a string:");
    gets(string);
    int i=0;
    while((tolower(string[i]))!='\0')
    {
        if(string[i]=='a'||string[i]=='e'||string[i]=='i'||string[i]=='o'||string[i]=='u')
        {
            vowel++;
        }
        else if (string[i]>='a'&&string[i]<'z')
        {
            consonant++;
        }
        else if(string[i]>='0'&&string[i]<='9')
        {
            digit++;
        }
        else if(string[i]=' ')
        {
            word++;
        }
        else{
            other++;
        }
        i++;


    }
    printf("Number of vowel in the string is:%d\n",vowel);
    printf("Number of consonant in the string is:%d\n",consonant);
    printf("Number of digit in the string is:%d\n",digit);
    printf("Number of words in the string is:%d\n",word);
    printf("Other things are:%d",other);
    return 0;

}