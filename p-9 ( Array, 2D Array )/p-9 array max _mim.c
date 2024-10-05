// write a program that can take some numbers and display maximum or minimum
#include<stdio.h>
int main()
{
    int i,a[1000],n;
    printf("How many numbers : ");
    scanf("%d",&n);

    printf("Enter %d numbers : ",n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    int max=a[0];
    for(i=1; i<n; i++)
    {
        if(max<a[i])
            max = a[i];
    }
    printf("Maximum = %d\n",max);

    int min = a[0];
    for(i=1; i<n; i++)
    {
       if(min>a[i])
            min = a[i];
    }
    printf("Minimum = %d\n",min);
}
