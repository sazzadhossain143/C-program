
#include <stdio.h>

int main() {

    int d1,d2,h1,h2,m1,m2,s1,s2;
    char c1,c2,c3,c4, a1[3],a2[3];


    scanf("%s",&a1);
    scanf("%d",&d1);
    scanf("%d %c %d %c %d",&h1,&c1,&m1,&c1,&s1);

    scanf("%s",&a2);
    scanf("%d",&d2);
    scanf("%d %c %d %c %d",&h2,&c3,&m2,&c4,&s2);

    int d,h,m,s;
    d=d2-d1;
    h=h2-h1;
    if(h<0)
    {d--;h=24+h;}
    m=m2-m1;
    if(m<0){h--;m=60+m;}
    s=s2-s1;
    if(d<0){m--;s=60+s;}

    printf("%d dia(s)\n",d);
    printf("%d hora(s)\n",h);
    printf("%d minuto(s)\n",m);
    printf("%d segundo(s)\n",s);

    return 0;
}
