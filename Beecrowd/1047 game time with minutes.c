 /*// game time
#include<stdio.h>
int main()
{
   int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);
    if(a>c && b>d)
    {
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",(c+24)-a,(b+60)-d);
    }
    else if((a>c && b<d) || (a<c && b>d))
    {
        if(a<c && b>d)
        {
            int n=(d+60)-b;
            if(n<60)
            {
                printf("O JOGO DUROU 0 HORA(S) E %d MINUTO(S)\n",n);
            }
            else
                printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",c-a,n);
        }
        else if(a>c && b<d)
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",(c+24)-a,d-b);
    }

    else if(a<c && b<d)
    {
        printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",c-a,d-b);
    }
    else if(a==c && b==d)
    {
        printf("O JOGO DUROU 24 HORA(S) E 0 MINUTO(S)\n");
    }

}
*/
// game time
#include<stdio.h>
int main()
{
    int a,b,c,d;
    scanf("%d%d%d%d",&a,&b,&c,&d);

    int s,e;
    s = a*60+b;
    e = c*60+d;

    int t,h,m;
    t = e - s; if(t<=0) t=t+24*60;
    h = t/60;
    m = t%60;

    printf("O JOGO DUROU %d HORA(S) E %d MINUTO(S)\n",h,m);

    return 0;
}

//*/
