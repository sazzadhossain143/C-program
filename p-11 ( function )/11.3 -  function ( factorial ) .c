// factorial ( in function )

int fact(int n)
{
    int i,p=1;
    for(i=n;i>1;i--)
    {
        p=p*i;
    }
    return p;
}
int main()
{
    int n;

    printf("Enter the  numbers : ");
    scanf("%d",&n);

    printf("Factorial of %d! is = %d\n",n,fact(n));

    getch ();
}
