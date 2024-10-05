#include<stdio.h>
int main()
{

    // armstrong number ( number=153, sum=1^3 + 5^3 +3^3 = 153 )

    int num,temp,rem,sum=0;
 /*
    printf("Enter an Number : ");
    scanf("%d",&num);

    temp=num;
    while(temp!=0)
    {
        rem=temp%10;
        sum=sum+rem*rem*rem;
        temp=temp/10;
    }
    if(num==sum)
    printf("The number is armstrong number.\n");
    else
    printf("The number is armstrong number.\n");

   */
        // print armstrong numbers

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
        sum=sum+rem*rem*rem;
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

