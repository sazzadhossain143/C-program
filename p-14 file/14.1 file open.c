#include<stdio.h>
int main()
{
    FILE *file;

    char name[30]="Sazzad Hossain";
    int length = strlen(name);
    int i;
    file = fopen("test.txt","r");

    if(file==NULL)
    {
        printf("File doesn't exsit");
    }
    else
    {
        printf("File is opened\n");
        for(i=0; i<length; i++)
        {
            fputs(name[i],file);
        }
        printf("File is written successfully\n");
        fclose(file);
    }

    getch();
}
