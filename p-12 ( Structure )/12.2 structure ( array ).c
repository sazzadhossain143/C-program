#include<stdio.h>
struct person   // globale
{
    char name[50];
    int age;
    float salary;

};
struct person person[2];

void desplay(struct person p)
{
    printf("Name : %s",p.name);
    printf("Age : %d",p.age);
    printf("Salary : %s",p.salary);
}

int main()
{
    int i;
    for(i=0; i<2; i++)
    {
        printf("Enter information for person%d : \n",i+1);

        printf("Enter name : ");
        fflush(stdin);
        gets(person[i].name);
        //fflush(stdin);
        printf("Enter age : ");
        scanf("%d",&person[i].age);
        printf("Enter salary : ");
        scanf("%f",&person[i].salary);
    }

    for(i=0; i<2; i++)
    {
        printf("Information for person%d : \n",i+1);

        printf("Name = %s\n",person[i].name);
        //puts(person[i].name);
        printf("Age = %d\n",person[i].age);
        printf("Salary = %.2f\n",person[i].salary);

    }






    getch();
}
