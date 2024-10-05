#include<stdio.h>
int main ()
{
    int choice;
    float temp,convertedTemp;

    printf("Chose a conversion temperature menu : \n");
    printf("1. Fahrenheit to Celsius \n");
    printf("2. Celsius to Fahrenheit \n");
    printf("Enter a choice = ");
    scanf("%d", &choice);

    switch(choice)
    {
    case 1:
        {
            printf("Enter the Fahrenheit temperature = ");
            scanf("%f", &temp);
            convertedTemp = (temp-32)/1.8;
            printf("Converted temperature is = %.2f", convertedTemp);
            break;
        }
    case 2:
        {
            printf("Enter the Celsius temperature = ");
            scanf("%f", &temp);
            convertedTemp = (1.8*temp)+32;
            printf("Converted temperature is = %.2f", convertedTemp);
            break;
        }
    default:
        printf("Not a correct option");

    }

    getch();
}
