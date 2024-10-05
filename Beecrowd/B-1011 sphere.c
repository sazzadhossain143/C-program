#include<stdio.h>
int main()
{
    double R, pi=3.14159;
    scanf("%lf",&R);            // volume = (4/3) * pi * R3
    printf("VOLUME = %.3lf\n", 4.0/3*pi*R*R*R);
}
