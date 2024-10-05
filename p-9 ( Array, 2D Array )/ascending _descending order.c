// write a program that can take some numbers and display ascending or descending order
#include<stdio.h>
int main()
{
    int i,a[1000],n,j,k;
    printf("How many numbers : ");
    scanf("%d",&n);

    printf("Enter %d numbers : ",n);

    for(i=0; i<n; i++)
    {
        scanf("%d",&a[i]);
    }

    for (i = 0; i < n; ++i)
        {
            for (j = i + 1; j < n; ++j)
        {
            if (a[i] < a[j])
                {
                    k = a[i];
                    a[i] = a[j];
                    a[j] = k;
                }
            }
        }

        printf("The numbers arranged in descending order are given below :\n");

        for (i = 0; i < n; ++i)
        {
            printf("%d ", a[i]);
        }
        printf("\n");
}

