#include<stdio.h>
int main ()
{
    float N1,N2,N3,N4,avg;
    scanf("%f%f%f%f",&N1,&N2,&N3,&N4);
    avg=(N1*2+N2*3+N3*4+N4*1)/(2+3+4+1);
    printf("Media: %.1f\n",avg);
    if(avg>=7.0)
        printf("Aluno aprovado.\n");
    else if(avg<5.0)
        printf("Aluno reprovado.\n");
    else if(avg>=5.0 && avg<=6.9)
    {
        printf("Aluno em exame.\n");
        float n5,avg2;
        scanf("%f",&n5);
        printf("Nota do exame: %.1f\n",n5);
        avg2=(avg+n5)/2;
        if(avg2>=5.0)
            printf("Aluno aprovado.\n");
        else if(avg2<=4.9)
        {
            printf("Aluno reprovado.\n");
        }
        printf("Media final: %.1f\n",avg2);
    }

}
