#include<stdio.h>
int main()

{
    int n1,n2,a1,a2,lcm,gcd,temp;

    printf("Enter two numbers : ");
    scanf("%d%d",&n1,&n2);

    a1=n1;
    a2=n2;
    while(a2!=0)
    {
        temp=a1%a2;
        a1=a2;
        a2=temp;

    }
    gcd=a1;
    lcm=(n1*n2)/gcd;


        printf("GCD = %d \n",gcd);

        printf("LCM = %d \n",lcm);


    getch ();
}

