#include<stdio.h>
int main()
{
 /*   int i,sum=0,a[5] = {1,2,3,4,5};

    for(i=0; i<5; i++)
    {
        sum = sum + a[i];
    }

    printf("The sum is = %d \n", sum);
    printf("The average is = %.2f\n", (float)sum/5);

*/
    {
        int i,sum=0,a[100],n ;

    printf("How many numbers for sum = ");
    scanf("%d",&n);
    for(i=0; i<n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i=0; i<n; i++)
    {
        sum = sum + a[i];
    }

    printf("The sum is = %d \n", sum);
    printf("The average is = %.2f\n", (float)sum/n);
    }

}
