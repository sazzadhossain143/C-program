#include<stdio.h>

int location(int s)
{
    if(s%2==0)
        return s/2;
    else
        return 3*s+1;
}

int main()
{
    int count=0,s;
    scanf("%d",&s);

    while(s!=1)
    {
        s=location(s);
        printf("%d ",s);
        count++;
    }

    printf("\n%d",count);


    return 0;
}
