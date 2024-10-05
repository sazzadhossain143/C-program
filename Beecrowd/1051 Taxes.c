#include<stdio.h>
int main()
{
    float n;
    scanf("%f",&n);

    if(n>=0 && n<=2000.00)
        printf("Isento\n");
    else if(n>=2000.01 && n<=3000.00)
        printf("R$ %.2f\n",((n-2000.00)*8)/100);
    else if(n>=3000.01 && n<=4500.00)
        printf("R$ %.2f\n",(80+((n-3000.00)*18)/100));
    else if(n>4500.00)
        printf("R$ %.2f\n",(80+270+((n-4500.00)*28)/100));


}
