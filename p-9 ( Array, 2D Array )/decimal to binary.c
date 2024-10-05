#include<stdio.h>
int main()
{
    int a[10],i=0,n,r;
    printf("Enter a decimal number : ");
    scanf("%d",&n);
    while(n>0)
    {
        r=n%2;
        a[i]=r;
        n=n/2;
        i++;
    }
    i=i-1;
    while(i>=0)
    {
        printf("%d ",a[i]);
        i--;
    }
    getch();
}
