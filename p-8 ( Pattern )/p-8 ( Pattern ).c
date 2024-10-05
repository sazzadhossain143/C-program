#include<stdio.h>
int main()
{
    /*
       int n, row, col;
       printf("Enter number = ");
       scanf("%d", &n);

       for(row=1; row<=n; row++)
       {
           for(col=1; col<=row; col++)    //for(col=1; col<=n; col++)
           {
               printf("%d ", col);       // row, col%2 , row%2,
           }                            // %c , col+64=A, col+96=a, row+64=A
                                        // prinft("* ");
           printf("\n");
       }

    {
       int n, row, col;
       printf("Enter number = ");
       scanf("%d", &n);

       for(row=1; row<=n; row++)
       {
           for(col=1; col<=row; col++)
           {
               printf("%d ", col*row);
           }

           printf("\n");
       }
    }


    {
       int n, row, col;
       printf("Enter number = ");
       scanf("%d", &n);

       for(row=1; row<=n; row++)
       {
           for(col=n; col>=row; col--)
           {
               printf("%d ", row%2); // col, row, col%2 , row%2,
           }          // %c , col+64=A, col+96=a, row+64=A
               // prinft("* ");
           printf("\n");
       }
    }

    {
        int n, row, col;
        printf("Enter number = ");
        scanf("%d", &n);


        for(row=1; row<=n; row++)
        {
            for(col=1; col<=row; col++)
            {
                printf("%d ", col); // row, col%2 , row%2,
            }          // %c , col+64=A, col+96=a, row+64=A
            // prinft("* ");
            printf("\n");
        }
        for(row=n-1; row>=1; row--)
        {
            for(col=1; col<=row; col++)
            {
                printf("%d ", col); // row, col%2 , row%2,
            }          // %c , col+64=A, col+96=a, row+64=A
            // prinft("* ");
            printf("\n");
        }
    }
*/

     /*           1
                2 1
              3 2 1
            4 3 2 1     */
 /*       int n, row, col;
        printf("Enter number = ");
        scanf("%d", &n);

        for(row=1; row<=n; row++)
        {
            for(col=1; col<=n-row; col++)

                printf("  ");


            for(col=row; col>=1; col--)
            {

                printf("%d ", col);         // row, col%2 , row%2,
            }                               // %c , col+64=A, col+96=a, row+64=A
            // prinft("* ");
            printf("\n");
        }
*/

     /*           1
                1 2
              1 2 3
            1 2 3 4     */
        int n, row, col;
        printf("Enter number = ");
        scanf("%d", &n);

        for(row=1; row<=n; row++)
        {
            for(col=1; col<=n-row; col++)

                printf("  ");


            for(col=1; col<=row; col++)
            {

                printf("%d ", col);         // row, col%2 , row%2,
            }                               // %c , col+64=A, col+96=a, row+64=A
            // prinft("* ");
            printf("\n");
        }
/*
        for(row=n-1; row>=1; row--)
        {
            for(col=1; col<=n-row; col++)

                printf("  ");

            for(col=1; col<=row; col++)
            {
                printf("%d ", col);         // row, col%2 , row%2,
            }                               // %c , col+64=A, col+96=a, row+64=A
            // prinft("* ");
            printf("\n");
        }
    }


    {   //    *
        //   * *
        //  * * *

        int n, row, col;
        printf("Enter number = ");
        scanf("%d", &n);

        for(row=1; row<=n; row++)
        {
            for(col=1; col<=n-row; col++)
                printf(" ");

            for(col=1; col<=row; col++)
            {
                printf("* ");
                //printf("%d ", col);         // row, col%2 , row%2,
            }                               // %c , col+64=A, col+96=a, row+64=A
            printf("\n");
        }

        for(row=n-1; row>=1; row--)                 //  * * *
        {                                           //   * *
            for(col=1; col<=n-row; col++)           //    *

                printf(" ");

            for(col=1; col<=row; col++)
            {
                printf("* ");
                //printf("%d ", col);                            // row, col%2 , row%2,
            }                               // %c , col+64=A, col+96=a, row+64=A
            printf("\n");
        }
    }

        //   * * *
        //   *   *
        //   * * *
    {
        int n, row, col;
        printf("Enter number = ");
        scanf("%d", &n);

        for(row=1; row<=n; row++)
        {
            for(col=1; col<=n; col++)
            {
                if(row==1 || row==n || col==1 || col==n)
                    printf("* ");
                else
                    printf("  ");
            }
            printf("\n");
        }
    }


        //   *   *
        //     *
        //   *   *
    {
        int n, row, col;
        printf("Enter number = ");
        scanf("%d", &n);

        for(row=1; row<=n; row++)
        {
            for(col=1; col<=n; col++)
            {
                if(row==col || row+col==n+1)
                    printf("* ");
                else
                    printf("  ");
            }
            printf("\n");
        }
    }

        //   *
        //   * *
        //   *   *
    {   //   * * * *
        int n, row, col;
        printf("Enter number = ");
        scanf("%d", &n);

        for(row=1; row<=n; row++)
        {
            for(col=1; col<=n; col++)
            {
                if(row==n || col==1 || col==row)
                    printf("* ");
                else
                    printf("  ");
            }
            printf("\n");
        }
    }

*/

    getch ();
}
