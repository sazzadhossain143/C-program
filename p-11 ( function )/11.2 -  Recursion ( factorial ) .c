// Recursion ( factorial ) in function

#include <stdio.h>
int factorial(int i)
{

    if(i <= 1)
    {
        return 1;
    }
    return i * factorial(i - 1);
}

int  main()
{
    int n;

    printf("Enter a number : ");
    scanf("%d",&n);

    printf("Factorial of %d is %d\n", n, factorial(n));

    getch ();
}
