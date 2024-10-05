#include<stdio.h>
int main()

{
    int i,j,k;

    for(i=1; i<=7; i++)
    {
        for(k=1; k<=5; k++)
        printf(" ");

        for(j=1; j<=6; j++)
        {
            if((i==1 && (j==1 || j==6)) ||(i==7 && (j==1 || j==6)) )
            printf("  ");
            else
                printf("* ");
        }


        //A
        for(k=i; k<=6; k++)
            printf(" ");
        for(j=1; j<=i; j++)
        {
            if(i!=6 && i!=7)
            {
                if((i==3 && j==2) || (i==4 && j==3)|| (i==4 && j==2) )
                    printf("  ");
                else
                    printf("* ");
            }
            else if((i==7 && (j==1 || j==i)) ||(i==6 && (j==1 || j==6)) )
                printf("* ");
            else
                printf("  ");
        }
        printf("\n");

    }
    for(k=1; k<=2; k++)
        printf(" ");
    for(k=i; k<=4; k++)
        printf(" ");
    getch ();
}

