#include<stdio.h>
int main()
{
    int d,y,m;
    scanf("%d",&d);
    printf("%d ano(s)\n",d/365);
    printf("%d mes(es)\n",(d%365)/30);
    printf("%d dia(s)\n",(d%365)%30);

}
