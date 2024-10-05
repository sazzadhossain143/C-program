#include<stdio.h>
int main()
{
    /*
    Strong number ( number=145, sum = 1! + 4! + 5! =145 )
    */


    int num,temp,rem,sum=0,i,fact;
 /*
    printf("Enter an Number : ");
    scanf("%d",&num);

    temp=num;
    while(temp!=0)
    {
        rem=temp%10;
        fact=1;
        for(i=1; i<=rem; i++)
        {
            fact=fact*i;
        }
        sum=sum+fact;
        temp=temp/10;
    }
    if(sum==num)
        printf("The number is a strong number.\n");
    else
        printf("The number is a not strong number.\n");

   */
        // print stron numbers

    int initialn,finaln,a;
    printf("Enter initial number : ");
    scanf("%d",&initialn);
    printf("Enter final number : ");
    scanf("%d",&finaln);

    for(a=initialn; a<=finaln; a++)
    {

    temp=a;
    while(temp!=0)
    {
        rem=temp%10;
        fact=1;
        for(i=1; i<=rem; i++)
        {
            fact=fact*i;
        }
        sum=sum+fact;
        temp=temp/10;
    }
    if(sum==a)
    {
        printf("%d ",a);
    }
       sum=0;
    }


    getch();
}

