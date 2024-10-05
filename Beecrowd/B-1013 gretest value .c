#include<stdio.h>
int main()
{
    /*int a,b,c;
    scanf("%d%d%d",&a,&b,&c);
    if(a>b && a>c)
        printf("%d eh o maior\n",a);
    else if (b>a && b>c)
        printf("%d eh o maior\n",b);
    else
        printf("%d eh o maior\n",c);
 */
   int a,b,c,d;
   scanf("%d%d%d",&a,&b,&c);
   d=(a+b+abs(a-b))/2;
   d=(d+c+abs(d-c))/2;
   printf("%d eh o maior\n",d);

}
