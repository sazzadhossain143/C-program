/*
        Name : Sazzad Hossain
        ID   : 00432220005101103
*/
#include<stdio.h>
int main()
{
       int n, row, col, sum=0;

       printf("Enter number = ");
       scanf("%d", &n);

       for(row=1; row<=n; row++)
       {
           for(col=1; col<=row; col++)
           {
               sum=sum+1;
               printf("%d ",sum);
           }
           printf("\n");
       }
}
