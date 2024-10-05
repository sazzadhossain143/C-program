#include<stdio.h>
int main()
{
    int i,j,a[10][10],b[10][10],row1,col1,row2,col2,c[10][10];

    printf("Enter the number of first matrix rows and cols : ");
    scanf("%d %d",&row1,&col1);
    printf("Enter the number of second matrix rows and cols : ");
    scanf("%d %d",&row2,&col2);

    while(row1!=col2)
    {
        printf("Error !! row of first matrix not equal to col of second matrix.");
        printf("Enter the number of first matrix rows and cols : ");
        scanf("%d %d",&row1,&col1);
        printf("Enter the number of second matrix rows and cols : ");
        scanf("%d %d",&row2,&col2);

    }
    printf("Enter elements for A matrix : \n");
    for(i=0; i<row1; i++)
    {
        for(j=0; j<col1; j++)
        {
            printf("A[%d][%d]= ",i,j);
            scanf("%d",&a[i][j]);
        }
        printf("\n");
    }
    printf("Matrix A = \n");
    for(i=0; i<row1; i++)
    {
        printf("\t");
        for(j=0; j<col1; j++)
        {
            printf("%d ",a[i][j]);
        }
        printf("\n");
    }
    printf("\nEnter elements for B matrix : \n");
    for(i=0; i<row2; i++)
    {
        for(j=0; j<col2; j++)
        {
            printf("B[%d][%d]= ",i,j);
            scanf("%d",&b[i][j]);
        }
        printf("\n");
    }
    printf("Matrix B = \n");
    for(i=0; i<row2; i++)
    {
        printf("\t");
        for(j=0; j<col2; j++)
        {
            printf("%d ",b[i][j]);
        }
        printf("\n");
    }

    int sum,k,result[10][10];
    for(i=0; i<row1; i++)
    {
        for(j=0; j<col2; j++)
        {
            for(k=0; k<col1; k++)
            {
                sum = sum + a[i][k] * b[k][j];
            }
            result[i][j]=sum;
            sum=0;
        }

    }

    printf("Matrix A*B = \n");
    for(i=0; i<row1; i++)
    {
        printf("\t");
        for(j=0; j<col2; j++)
        {
            printf("%d ",result[i][j]);
        }
        printf("\n");
    }


    getch();
}
