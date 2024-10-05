// function

#include<stdio.h>
/*
void sum(int x, int y)
{
    printf("%d",x+y);
}
int main()
{
    int a,b;
    printf("Enter the two numbers : ");
    scanf("%d%d",&a,&b);
    sum(a,b);

    return 0;
}
*/

void max(int x, int y){

{
    if(x>y)
        printf("%d",x);
    else
        printf("%d",y);
}

//return (x>y)? x:y;


}

int main()
{
    int a,b;
    printf("Enter the two numbers : ");
    scanf("%d%d",&a,&b);
    max(a,b);
    //int result = max(a,b);
    //printf("%d",result);

    getch ();
}
