// factorial ( in loop )

#include<stdio.h>
int main()
{
    int n;

    printf("Enter the  numbers : ");
    scanf("%d",&n);

    int i,fact=1;
    for(i=n; i>=1; i--)
    {
        fact = fact * i;
    }
    printf("Factorial of %d! is = %d\n",n,fact);

    getch ();
}
