#include<stdio.h>
int main()
{

    // ascii to charater

    int num;
    printf("Enter any ASCII number or value = ");
    scanf("%d", &num);
    printf("The ASCII character is = %c \n", num);

/*

// character to ascii

    char ch;
    printf("Enter any character = ");
    scanf("%c", &ch);
    printf("The ASCII value is = %d \n", ch);



 // lowercase letter to uppercase letter

   char lower;
   printf("Enter any lowercase letter = ");
   scanf("%c", &lower);                                 // b=98 ascii value
   printf("The uppercase letter is = %c \n ",lower-32); // B=66 ascii value



// uppercase to lowercase

char upper;
printf("Enter the uppercase value = ");
scanf("%c", &upper);
printf("The lowercase letter is = %c \n", upper+32);




// lower to upper ( use library function )

char lower, upper;
printf("Enter the lowercase letter =");
scanf("%c", &lower);

upper = toupper(lower);
printf("Uppercase letter = %c \n", upper);




//  upper to lower ( use library function )

char lower, upper;
printf("Enter the uppercase letter =");
scanf("%c", &upper);

lower = tolower(upper);
printf("lowercase letter = %c \n", lower);

*/

    return 0;
}
