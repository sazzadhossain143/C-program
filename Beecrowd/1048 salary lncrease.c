#include<stdio.h>
int main()
{
   /*  char a;
    scanf("%c",&a);
    printf("%d",a);
   */
    float n;
    scanf("%f",&n);

    if(n>=0 && n<=400.00)
    {
        printf("Novo salario: %.2f\n",(n+((n*15)/100)));
        printf("Reajuste ganho: %.2f\n",((n*15)/100));
        printf("Em percentual: 15 %c\n",37);
    }
    else if(n>=400.01 && n<=800.00)
    {
        printf("Novo salario: %.2f\n",(n+((n*12)/100)));
        printf("Reajuste ganho: %.2f\n",((n*12)/100));
        printf("Em percentual: 12 %c\n",37);
    }
    else if(n>=800.01 && n<=1200.00)
    {
        printf("Novo salario: %.2f\n",(n+((n*10)/100)));
        printf("Reajuste ganho: %.2f\n",((n*10)/100));
        printf("Em percentual: 10 %c\n",37);
    }
    else if(n>=1200.01 && n<=2000.00)
    {
        printf("Novo salario: %.2f\n",(n+((n*7)/100)));
        printf("Reajuste ganho: %.2f\n",((n*7)/100));
        printf("Em percentual: 7 %c\n",37);
    }
    else if(n>2000.00)
    {
        printf("Novo salario: %.2f\n",(n+((n*4)/100)));
        printf("Reajuste ganho: %.2f\n",((n*4)/100));
        printf("Em percentual: 4 %c\n",37);
    }


}

