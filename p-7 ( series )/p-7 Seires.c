#include<stdio.h>
int main ()
{
    int n, sum=0, i;
    printf("Enter the last number of series : ");
    scanf("%d",&n);
    printf("1 + 2 + 3 + ..... + %d" , n);  //1 + 2 + 3 + ..... + n

    for (i=1; i<=n; i=i+1)
    {
        sum = sum + i;
    }
    printf(" = %d\n", sum);


    {
        int n1, sum1=0, i1=1;
    printf("Enter the last number of series : ");
    scanf("%d",&n1);
    printf("1 + 3 + 5 + ..... + %d" , n1);

    while ( i1<=n1 )
    {
        sum1 = sum1 + i1;
        i1=i1+2;
    }
    printf(" = %d\n", sum1);
    }


    {
        int n2,n3, sum2=0, a=1,b=2;
    printf("Enter the last number of series : ");
    scanf("%d %d",&n2, &n3);
    printf("1*2 + 2*3 + 3*4 + ..... + %d*%d" , n2,n3);

    while ( a<=n2 && b<=n3 )
    {
        sum2 = sum2 + a*b;
        a=a+1;
        b=b+1;
    }
    printf(" = %d\n", sum2);
    }

    {
        int m, result=1, i;
    printf("Enter the last number of series : ");
    scanf("%d",&m);
    printf("1^3 x 3^3 x 5^3 x ..... x %d^3" , m);  //1 + 2 + 3 + ..... + n

    for (i=1; i<=m; i=i+2)
    {
        result = result * i*i*i;
    }
    printf(" = %d\n", result);
    }


    getch ();
}
