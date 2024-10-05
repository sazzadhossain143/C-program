#include<stdio.h>
int main()
{
    int a,b,c,d;
    float c1,c2;
    scanf("%d%d%f", &a,&b,&c1);
    scanf("%d%d%f", &c,&d,&c2);
    printf("VALOR A PAGAR: R$ %.2f\n", (b*c1)+(d*c2) );

}
