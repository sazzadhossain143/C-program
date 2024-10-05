#include<stdio.h>
int main()
{
    char s1[100],ch;
    int i,vowels, consonants, words, digits ,small,capital, other;
    i=vowels=consonants= words=digits=other=small=capital=0;

    printf("Enter a string : ");
    gets(s1);
/*
    while(s1[i]!='\0')
    {
        if(s1[i]>=97 && s1[i]<=122)
            small++;
        else if(s1[i]>=65 && s1[i]<=90)
            capital++;
        i++;
    }
*/
    while((ch=s1[i])!='\0')
    {
        if(ch=='a' || ch=='e' || ch=='i' || ch=='o' || ch=='u' ||
           ch=='A' || ch=='E' || ch=='I' || ch=='O' || ch=='U')
            vowels++;
        //else if((ch>='a' && ch<='z') || (ch>='A' && ch<='Z') )
            //consonants++;
        else if((ch>='0' && ch<='9'))
            digits++;
        else if(ch>='a' && ch<='z')
            small++;
        else if(ch>='A' && ch<='Z')
            capital++;
        else if(ch==' ')
            words++;
        else
            other++;

        i++;
    }
    words++;



    printf("Number of vowels = %d\n",vowels);
    printf("Number of consonants = %d\n",consonants);
    printf("Number of capitals = %d\n",capital);
    printf("Number of smalls = %d\n",small);
    printf("Number of digits = %d\n",digits);
    printf("Number of words = %d\n",words);
    printf("Number of others = %d\n",other);


}
