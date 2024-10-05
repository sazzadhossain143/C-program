#include<stdio.h>
int main()
{
    int a,b,c,min;
    scanf("%d%d%d",&a,&b,&c);

    if(a<b && a<c)
    {
        min=a;
        printf("%d\n",min);
    }
    else if(b<a && b<c)
    {
        min=b;
        printf("%d\n",min);
    }
    else
    {
        min=c;
        printf("%d\n",min);
    }

    if(a>min && (a<b || a<c) )
        printf("%d\n",a);
    else if(b>min && (b<a || b<c))
        printf("%d\n",b);
    else if(c>min && (c<a || c<b))
        printf("%d\n",c);

    if(a>b && a>c)
    {
        printf("%d\n",a);
    }
    else if(b>a && b>c)
    {
        printf("%d\n",b);
    }
    else
    {
        printf("%d\n",c);
    }
    printf("\n");
    printf("%d\n%d\n%d\n",a,b,c);
}
