#include<stdio.h>
int main()
{
    int n,t;
    scanf("%d",&n);
    while(n>0)
    {
        t=n%10;
        if(t%2==0)
        {
            printf("SAD");
            return 0;
        }
        n/=10;
    }
    printf("HAPPY");
    return 0;
}



