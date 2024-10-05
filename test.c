/*
output: n=5!//120
*/

int fact(int n)
{
    if(n==1)
        return 1;
    else
        return n*fact(n-1);
}
int feboncci(int a)
{
    if(a==0)
        {return 0;}
    if(a==1)
        {return 1;}
    else
        return feboncci(a-1)+ feboncci(a-2);
}
struct student
  {
    int id;
    double cgpa;
    char name[20];
  };
  union employee
  {
      int id;
      char name[10];
      float salary;
  };
   //printf("%d\n",sizeof(struct student));
  //printf("%d",sizeof(union employee));
#include<stdio.h>
int main()
{
 /*   char *str1[50]="Bangaldesh";
    char *str2[50]="is our homeland";
    char *str3[50];
    str3=strcat(str1,str2);
    printf("%s %s",*str3,*str1);
*/

    char name[50];

    //printf("%d",sizeof(name));
    //for(i=0; i<50;)
    gets(name);
    int i=0,leanth=0;
    while(name[i]!='\0')
    {
        i++;
        leanth++;
    }
    printf("leanth = %d",leanth);












    getch ();
}
