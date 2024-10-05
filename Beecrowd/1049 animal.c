#include<stdio.h>
int main()
{
    char s1[20],s2[20],s3[20];
     gets(s1);
     gets(s2);
     gets(s3);
    //scanf("%s",s1);


    if(s1[0]=='v' && s2[0]=='a' && s3[0]=='c')
    {
        printf("aguia\n");
    }
    else if(s1[0]=='v' && s2[0]=='a' && s3[0]=='o')
    {
        printf("pomba\n");
    }
    else if(s1[0]=='v' && s2[0]=='m' && s3[0]=='o')
    {
        printf("homem\n");
    }
    else if(s1[0]=='v' && s2[0]=='m' && s3[0]=='h')
    {
        printf("vaca\n");
    }
    else if(s1[0]=='i' && s2[0]=='i' && s3[2]=='m')
    {
        printf("pulga\n");
    }
    else if(s1[0]=='i' && s2[0]=='i' && s3[2]=='r')
    {
        printf("lagarta\n");
    }
    else if(s1[0]=='i' && s2[0]=='a' && s3[0]=='h')
    {
        printf("sanguessuga\n");
    }
    else if(s1[0]=='i' && s2[0]=='a' && s3[0]=='o')
    {
        printf("minhoca\n");
    }

}
