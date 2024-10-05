#include<stdio.h>
int main()
{
    // Palindrome number ( number=121, reverce number = number 121 )

    int num,temp,rem,sum=0;
/*
    printf("Enter an Number : ");
    scanf("%d",&num);

    temp=num;
    while(temp!=0)
    {
        rem=temp%10;
        sum=sum*10+rem;
        temp=temp/10;
    }
    if(num==sum)
    printf("The number is Palindrome number.\n"); // 121 == 121
    else
    printf("The number is not Palindrome number.\n"); // 123 != 321

 */

    // print Palindrome numbers

    int initialn,finaln,i;
    printf("Enter initial number : ");
    scanf("%d",&initialn);
    printf("Enter final number : ");
    scanf("%d",&finaln);

    for(i=initialn; i<=finaln; i++)
    {

    temp=i;
    while(temp!=0)
    {
        rem=temp%10;
        sum=sum*10+rem;
        temp=temp/10;
    }
    if(sum==i)
    {
        printf("%d ",i);
    }
       sum=0;
    }



    getch();
}


