#include<stdio.h>
int main()
{
    int a, n,cola=0,rab=0,sopa=0,sum=0;

    scanf("%d",&a);
    for(int i=1;i<=a;i++)
   {

   scanf("%d",&n);
   char ch;
   scanf("%c",&ch);

     switch(ch)
     {
        case 'C':
        cola=cola+n;
        break;
     case 'R':
        rab=rab+n;
        break;
    case 'S':
        sopa=sopa+n;
        break;
     }
         sum=sum+n;

   }
    float x,y,z;

     x=(float)(cola*100.00)/sum;
     y=(rab*100.00)/sum;
     z=(sopa*100.00)/sum;

     printf("Total: %d cobaias\n",sum) ;
     printf("Total de coelhos: %d\n",cola);
     printf("Total de ratos: %d\n",rab);
     printf("Total de sapos: %d\n",sopa);

     printf("Percentual de coelhos: %.2f %%\n",x);
     printf("Percentual de ratos: %.2f %%\n",y);
     printf("Percentual de sapos: %.2f %%\n",z);

   return 0;
}
