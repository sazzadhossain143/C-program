#include<stdio.h>
int main()
{
    int i,j,a[10][10],b[10][10],row,col,c[10][10];

    printf("Enter the number of rows and cols : ");
    scanf("%d %d",&row,&col);

    printf("Enter elements for A matrix : \n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("A[%d][%d]= ",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    printf("Matrix A = \n");
    for(i=0; i<row; i++)
    {
        printf("\t");
        for(j=0; j<col; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\nEnter elements for B matrix : \n");
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            printf("B[%d][%d]= ",i,j);
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }
    printf("Matrix B = \n");
    for(i=0; i<row; i++)
    {
        printf("\t");
        for(j=0; j<col; j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }
// matrix sum a+b
    for(i=0; i<row; i++)
    {
        for(j=0; j<col; j++)
        {
            c[i][j] = a[i][j] + b[i][j];
        }
    }

    printf("Matrix A+B = \n");
    for(i=0; i<row; i++)
    {
        printf("\t");
        for(j=0; j<col; j++)
        {
            printf("%d ",c[i][j]);
        }
        printf("\n");
    }


    getch();
}
