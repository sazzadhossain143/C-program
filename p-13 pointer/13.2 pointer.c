#include<stdio.h>
int main()
{

    int p,q,*x,*y,a,b,c,d;
    p=15;q=5;
    x=&p;y=&q;
    a=(*x)*(*y);
    b=a+(*x);
    c=5-((*x)/(*y));
    *x=(*x)+10;
    d=(*x)-(*y);
  printf("%d %d %d %d",a,b,c,d);
getch();
}
