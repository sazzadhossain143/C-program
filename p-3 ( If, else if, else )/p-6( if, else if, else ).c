#include<stdio.h>
int main ()
{
    // even or odd

    int num;

    printf("Enter any number = ");
    scanf("%d", &num);

    if(num%2==0)
        printf("Even");

    else
        printf("Odd");


// positive or negative

    int n;

    printf("Enter any number = ");
    scanf("%d" , &n);

    if(n>0)
        printf("positive");

    else if(n<0)
    printf("negative");

    else
    printf("zero");






    getch ();

}
