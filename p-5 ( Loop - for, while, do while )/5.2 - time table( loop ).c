// factorial ( in loop )

#include<stdio.h>
int main()
{
    int n;

    printf("Enter the  numbers : ");
    scanf("%d",&n);

    int i,sum;
    for(i=0; i<=10; i++)
    {
        sum = n * i;
        printf("%d x %d = %d\n",n,i,sum);
    }


    getch ();
}
