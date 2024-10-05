#include<stdio.h>
int main()
{
    // 1015 - Distance Between Two Points
    double x1,x2,y1,y2;

    scanf("%lf%lf",&x1,&y1);
    scanf("%lf%lf",&x2,&y2);

    printf("%.4lf\n", sqrt(((x2-x1)*(x2-x1))+((y2-y1)*(y2-y1))));

// 1016 - Distance
    int a;
    scanf("%d",&a);
    printf("%d minutos\n",a*2);


}
