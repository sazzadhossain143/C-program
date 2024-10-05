#include<stdio.h>
int main()
{
    int N;
    scanf("%d",&N);
    printf("%d\n",N);
    printf("%d nota(s) de R$ 100,00\n",N/100);
    printf("%d nota(s) de R$ 50,00\n",(N%100)/50);
    printf("%d nota(s) de R$ 20,00\n",((N%100)%50)/20);
    printf("%d nota(s) de R$ 10,00\n",(((N%100)%50)%20)/10);
    printf("%d nota(s) de R$ 5,00\n",((((N%100)%50)%20)%10)/5);
    printf("%d nota(s) de R$ 2,00\n",(((((N%100)%50)%20)%10)%5)/2);
    printf("%d nota(s) de R$ 1,00\n",((((((N%100)%50)%20)%10)%5)%2)/1);

    // way 2
    int n,a;
    scanf("%d",&n);
    printf("%d\n",n);
    printf("%d nota(s) de R$ 100,00\n",n/100);
    a = n%100;
    printf("%d nota(s) de R$ 50,00\n",a/50);
    a = a%50;
    printf("%d nota(s) de R$ 20,00\n",a/20);
    a = a%20;
    printf("%d nota(s) de R$ 10,00\n",a/10);
    a = a%10;
    printf("%d nota(s) de R$ 5,00\n",a/5);
    a = a%5;
    printf("%d nota(s) de R$ 2,00\n",a/2);
    a = a%2;
    printf("%d nota(s) de R$ 1,00\n",a/1);
}
