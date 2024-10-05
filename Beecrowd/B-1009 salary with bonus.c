#include<stdio.h>
int main()
{
    char name[10];
    double sr,sp;
    gets(name);
    scanf("%lf", &sr);
    scanf("%lf", &sp);
    printf("TOTAL = R$ %.2lf\n", sr+(sp*15/100));
}
