#include<stdio.h>
int main()
{
    char s1[]="Sazzad Hossain ", s2[20];
    int len = strlen(s1);           // strlen() = string size

   /*
    int i=0,len=0;
    while(s1[i]!='\0')
    {
        i++;len++;
    }
    */
 /*   strcpy(s2,s1);
    strcat(s1,s2);  // addission
    strcmp(s1,s2);      // s1==s2 : ture
    strrev(s1);
    strlwr();
    strupr();
    printf("Length = %d\n ",len);
    printf("copy = %s\n ",s2);
    printf("string add = %s\n ",s1);
    printf("string reverse = %s\n ",s1);
  */
    // swapping
    char a1[20]="Sazzad";
    char a2[20]="Sohan";
    char t[20];

    printf("a1 = %s \n",a1);
    printf("a2 = %s \n",a2);

    strcpy(t,a1);
    strcpy(a1,a2);
    strcpy(a2,t);

    printf("a1 = %s \n",a1);
    printf("a2 = %s \n",a2);
}
