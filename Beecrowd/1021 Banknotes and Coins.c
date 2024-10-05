//1021 Bank notes
#include<stdio.h>
int main()
{
    float m;
    scanf("%f",&m);

    float n1 = m*100;
    int n = n1;
    //printf("%d\n",n);
    printf("NOTAS:\n");
    printf("%d nota(s) de R$ 100.00\n",n/(100*100));
    n = n%(100*100);
    printf("%d nota(s) de R$ 50.00\n",n/5000);
    n = n%(50*100);
    printf("%d nota(s) de R$ 20.00\n",n/(2000));
    n = n%(20*100);
    printf("%d nota(s) de R$ 10.00\n",n/(1000));
    n = n%(10*100);
    printf("%d nota(s) de R$ 5.00\n",n/(500));
    n = n%(5*100);
    printf("%d nota(s) de R$ 2.00\n",n/(200));

    printf("MOEDAS:\n");
    n = n%(2*100);
    printf("%d moeda(s) de R$ 1.00\n",n/(1*100));
    n = n%(int)(1*100);
    printf("%d moeda(s) de R$ 0.50\n",n/(int)(0.50*100));
    n = n%(int)(0.50*100);
    printf("%d moeda(s) de R$ 0.25\n",n/(int)(0.25*100));
    n = n%(int)(0.25*100);
    printf("%d moeda(s) de R$ 0.10\n",n/(int)(0.10*100));
    n = n%(int)(0.10*100);
    printf("%d moeda(s) de R$ 0.05\n",n/(int)(0.05*100));
    n = n%(int)(0.05*100);
    printf("%d moeda(s) de R$ 0.01\n",n/(int)(0.01*100));

}

