#include<stdio.h>
int main()
{
   int a[10]={1,2,6,4,8,9,8,5,9,6},n,m,i,p=-1,count=0;

       printf("a[10]={1,2,6,4,8,9,8,5,9,6}\n");

   printf("Enter the number you want to search : ");
   scanf("%d",&n);

  // printf("This number is founded at position ");
   for(i=0; i<10; i++)
   {
       if(n==a[i])
       {
           p = i+1;
           count++;
           printf("%d ",p);
       }
   }
//printf("\n"); th place was founded by the number
  if(p==-1)
        printf("This number is not found\n");
   else
    {
        printf("th place was founded by the number \n");
        //printf("This number is founded at position \n");
        printf("This number is founded at %d times\n",count);
    }

    getch();
}
