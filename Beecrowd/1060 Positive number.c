
#include <stdio.h>

int main() {

    int count=0;
    float ar[6];
    for(int i=0; i<6; i++)
    {
        scanf("%f",&ar[i]);
    }
    for(int i=0; i<6; i++)
    {
        if(ar[i]>0)
            count++;
    }
    printf("%d valores positivos\n",count);



    return 0;
}
