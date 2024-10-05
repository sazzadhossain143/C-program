#include<stdio.h>
int main()
{
    int x = 5;
    int *p;
    p = &x;

    printf("x = %d\n",x);
    printf("&x = %d\n",&x);
    printf("p = %d\n",p);
    printf("*p = %d\n",*p);


    int a=20, b=24, sum;
    int *p1,*p2;

    p1= &a;
    p2= &b;

    sum = *p1 + *p2;
    printf("sum = %d\n",sum);

    //swapping
    int temp;

    temp=*p1;
    *p1=*p2;
    *p2=temp;

    printf("a=%d\n",a);
    printf("b=%d\n",b);

    int ar[5]={10,20,30,40,50},i;
    int *ptr;
    ptr=&ar[0];
    printf("ar = ");
    for(i=0; i<5; i++)
    {
        printf("%d ",*ptr);
        ptr++;
    }




    getch();
}
