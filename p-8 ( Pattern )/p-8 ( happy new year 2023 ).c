#include<stdio.h>
int main()

{
    int n;
    printf("Enter a new year : ");
    scanf("%d",&n);

    if(n==2023)
    {
        system("COLOR 0E");
        int i,j,k;
        printf("\n");
        for(i=1; i<=5; i++)
        {
            for(k=1; k<=14; k++)
                printf("  ");
            for(j=1; j<=5; j++)
            {
                if(j==1 || j==5 || i==3)
                    printf("* ");
                else
                    printf("  ");
            }
            for(k=1; k<=2; k++)
                printf(" ");
            for(k=i; k<=4; k++)
                printf(" ");
            for(j=1; j<=i; j++)
            {
                if(i!=5)
                {
                    if(i==3 && j==2)
                        printf("  ");
                    else
                        printf("* ");
                }
                else if(i==5 && (j==1 || j==i) )
                    printf("* ");
                else
                    printf("  ");
            }
            for(k=1; k<=2; k++)
                printf(" ");
            for(k=i; k<=4; k++)
                printf(" ");
            for(j=1; j<=5; j++)
            {
                if(i==1 || j==1 || i==3 || (j==5 && i<=3))
                    printf("* ");
                else
                    printf("  ");
            }
            for(k=1; k<=2; k++)
                printf(" ");
            for(j=1; j<=5; j++)
            {
                if(i==1 || j==1 || i==3 || (j==5 && i<=3))
                    printf("* ");
                else
                    printf("  ");
            }
            for(k=1; k<=2; k++)
                printf(" ");
            for(j=1; j<=5; j++)
            {
                if(i==1 && (j==1 || j==5) || (i==2 && (j==2 || j==4))|| ( i>=3 && j==3) )
                    printf("* ");
                else
                    printf("  ");
            }

            printf("\n");
        }
        printf("\n\n");
        for(i=1; i<=5; i++)
        {
            for(k=1; k<=13; k++)
                printf("   ");
            for(j=1; j<=5; j++)
            {
                if(j==1 || j==5 || i==j)
                    printf("* ");
                else
                    printf("  ");
            }
            for(k=1; k<=2; k++)
                printf(" ");
            for(j=1; j<=5; j++)
            {
                if(i==1 || i==3 || i==5 || j==1)
                    printf("* ");
                else
                    printf("  ");
            }
            for(k=1; k<=2; k++)
                printf(" ");
            for(j=1; j<=5; j++)
            {
                if((i==4 && j==2) || (i>=3 && i==j) || j==1 || j==5)
                    printf("* ");
                else
                    printf("  ");
            }

            printf("\n");
        }
        printf("\n\n");

        for(i=1; i<=5; i++)
        {
            for(k=1; k<=16; k++)
                printf("  ");
            for(j=1; j<=5; j++)
            {
                if(i==1 && (j==1 || j==5) || (i==2 && (j==2 || j==4))|| ( i>=3 && j==3) )
                    printf("* ");
                else
                    printf("  ");
            }
            for(k=1; k<=2; k++)
                printf(" ");
            for(j=1; j<=5; j++)
            {
                if(i==1 || i==3 || i==5 || j==1)
                    printf("* ");
                else
                    printf("  ");
            }
            for(k=1; k<=2; k++)
                printf(" ");
            for(k=i; k<=4; k++)
                printf(" ");
            for(j=1; j<=i; j++)
            {
                if(i!=5)
                {
                    if(i==3 && j==2)
                        printf("  ");
                    else
                        printf("* ");
                }
                else if(i==5 && (j==1 || j==i) )
                    printf("* ");
                else
                    printf("  ");
            }

            for(k=i; k<=4; k++)
                printf(" ");
            for(k=1; k<=2; k++)
                printf(" ");
            for(j=1; j<=5; j++)
            {
                if(i==1 || j==1 || i==3 || (j==5 && i<=3)|| (i==4 && j==4)|| (i==5 && j==5))
                    printf("* ");
                else
                    printf("  ");
            }

            printf("\n");
        }
        printf("\n\n");

        for(i=1; i<=5; i++)
        {
            for(k=1; k<=16; k++)
                printf("  ");
            for(j=1; j<=5; j++)
            {
                if((i==2 && j==1) || (i==1 && j==5)||(i==2 && j==4)||(i==3 && j==3)||(i==4 && j==2)||(i==5 && j==1)|| i==1 || i==5  )
                    printf("* ");
                else
                    printf("  ");
            }
            for(k=1; k<=2; k++)
                printf(" ");
            for(j=1; j<=5; j++)
            {
                if(i==1 || i==5 || j==1 || j==5)
                    printf("* ");
                else
                    printf("  ");
            }
            for(k=1; k<=2; k++)
                printf(" ");
            for(j=1; j<=5; j++)
            {
                if((i==2 && j==1) || (i==1 && j==5)||(i==2 && j==4)||(i==3 && j==3)||(i==4 && j==2)||(i==5 && j==1)|| i==1 || i==5  )
                    printf("* ");
                else
                    printf("  ");
            }
            for(k=1; k<=2; k++)
                printf(" ");
            for(j=1; j<=5; j++)
            {
                if(i==1 || (i==3 && j>=2) || i==5 || j==5)
                    printf("* ");
                else
                    printf("  ");
            }

            printf("\n");
        }
    }

    getch();

}
