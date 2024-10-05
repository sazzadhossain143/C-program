#include<stdio.h>
#define pi 3.1416
int main()

{   /* Write a program that takes two number and
    display sum, avrage(avg), difference(dif),
    multiply(mul), divite(div), remainder


    int n1,n2,sum,dif,mul,remainder;
    float avg,div;
    printf("Enter two number = ");
    scanf("%d %d", &n1,&n2);

    sum = n1 + n2;
    printf("Sum is = %d\n", sum);

    avg = (float)sum/2;         // type casting (data type change)
    printf("Avg is = %.2f\n", avg);

    dif = n1 - n2;
    printf("Sub is = %d\n", dif);

    mul = n1 * n2;
    printf("Mul is = %d\n", mul);

    div = (float)n1 / n2;
    printf("Div is = %.2f\n", div);

    remainder = n1 % n2;
    printf("Remainder is = %d\n \n", remainder);



// calcultes the area of triangle

    int base, height;
    float area;
    printf("Enter a Base = ");
    scanf("%d",&base);

    printf("Enter a height = ");
    scanf("%d",&height);

    area = (float)1/2 * base * height;  // formula of area = 1/2 * base * height
    printf("Area is = %.2f\n \n", area);



// calcultes the area of triangle

    float b, h, a;
    printf("Enter a Base = ");
    scanf("%f",&b);

    printf("Enter a height = ");
    scanf("%f",&h);

    a = 0.5 * b * h;
    printf("Area is = %.2f\n", a);



// calcultes the area of circle

    int r;
    float circlearea, pi = 3.1416;
    printf("Enter a radius = ");
    scanf("%d", &r);

    circlearea = pi*r*r;
    printf("Circle of area = %.2f\n", circlearea);



// calculates the area of circle

    // #define pi 3.1416   #include<math.h>
    float r,circlearea;
    printf("Enter a radius = ");
    scanf("%f", &r);

    circlearea = pi*r*r;  // M_PI   perimeter=2*pi*r
    printf("The area of circle = %.2f\n", circlearea);



//calculate the area of triangle (give three arms)
    float a,b,c,s,p,area;   //double
    printf("Enter three values = ");
    scanf("%f%f%f", &a,&b,&c);

    s = (a+b+c)/2;
    p = 2*s;
    area = sqrt(s*(s-a)*(s-b)*(s-c));

    printf("Halfrange = %.2f\n",s);
    printf("Perimeter = %.2f\n",p);
    printf("Area = %.2f\n",area);


// calculate the  area of oblong/rectangle
    float length, width, area;
    printf("Enter a length = ");
    scanf("%f",&length);

    printf("Enter a width = ");
    scanf("%f",&width);

    area =  length * width;
    printf("Area is = %.2f\n", area);
*/

// calculate centigrade to fahrenheit
    float c,f;
    printf("Enter a centrigrade = ");
    scanf("%f",&c);

    f =  32 + (c*1.8);
    printf("Fahrenheit = %.2f\n", f);



// calculate   fahrenheit to centigrade
    float C,F;
    printf("Enter a Fahrenheit = ");
    scanf("%f",&F);

    C =  (F-32)/1.8;
    printf("Centrigrade = %.2f\n", C);




    getch ();



}
