#include<stdio.h>
int main()
{

     /*         1
                2 3
                4 5 6
                7 8 9 10        */

/*       int n, row, col,sum=0;
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


    */


/*
            1 2 3 4 5 4 3 2 1
            1 2 3 4   4 3 2 1
            1 2 3       3 2 1
            1 2           2 1
            1               1
            1 2           2 1
            1 2 3       3 2 1
            1 2 3 4   4 3 2 1
            1 2 3 4 5 4 3 2 1
*/
    int row,col,n;
    printf("Enter a number : ");
    scanf("%d",&n);

/*
            1 2 3 4 5 4 3 2 1
            1 2 3 4   4 3 2 1
            1 2 3       3 2 1
            1 2           2 1
*/
/*
    for(row=n; row>=2; row--)
    {

        for(col=1; col<=row; col++)
        {
            printf("%d ",col);
        }
        for(col=row*2; col<(n*2)-1; col++)
        {
            printf("  ");
        }
        for(col=row; col>=1; col--)
        {
            if(col==n)
                {
                    col=n-1;
                    printf("%d ", col);
                }
            else
                printf("%d ", col);
        }
        printf("\n");
    }
 */
 /*
            1               1
            1 2           2 1
            1 2 3       3 2 1
            1 2 3 4   4 3 2 1
            1 2 3 4 5 4 3 2 1
  */
/*
    for(row=1; row<=n; row++)
    {

        for(col=1; col<=row; col++)
        {
            printf("%d ",col);
        }
        for(col=row*2; col<(n*2)-1; col++)
        {
            printf("  ");
        }
        for(col=row; col>=1; col--)
        {
            if(col==n)
                {
                    col=n-1;
                    printf("%d ", col);
                }
            else
                printf("%d ", col);
        }
        printf("\n");
    }
*/
/*
1 2 3 4 5 4 3 2 1
  1 2 3 4 3 2 1
    1 2 3 2 1
      1 2 1
*/

    for(row=n; row>=2; row--)
    {
        for(col=1; col<=n-row; col++)
        {
            printf("  ");
        }
        for(col=1; col<=row; col++)
        {
            printf("%d ",col);
        }
        for(col=row; col>=1; col--)
        {
            if(col==row)
            {
                col=row-1;
                printf("%d ",col);
            }

            else
                printf("%d ",col);
        }

        printf("\n");

    }


}

