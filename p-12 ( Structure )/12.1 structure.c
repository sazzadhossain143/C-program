#include<stdio.h>
struct person   // globale
{
    int age;
    float salary;

};
struct person person1, person2;

int main()
{
    printf("Enter age : ");
    scanf("%d",&person1.age);

    printf("Enter salary : ");
    scanf("%f",&person1.salary);

    printf("Person1 : \n");
    printf("Age = %d\n",person1.age);
    printf("Salary = %.2f\n",person1.salary);

    person2=person1;

    printf("Person2 : \n");
    printf("Age = %d\n",person2.age);
    printf("Salary = %.2f\n",person2.salary);




    getch();
}
