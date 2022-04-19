#include <stdio.h>
void main()
{
    int age;
    char gen;
    printf("Enter age of person ");
    scanf("%d", &age);
    printf("Enter the Gender m for male and f for female");
    scanf("%c", &gen);
    if (age >= 90 && gen == 'm')
        printf("Pension amt 4000 inr");
    else if (age >= 60 && gen == 'm')
        printf("Pension amt 6000 inr");
    else if (age < 60 && gen == 'm')
        printf("Pension amt 0 inr");
    else if (age >= 90 && gen == 'f')
        printf("Pension amt 3000 inr");
    else if (age >= 60 && gen == 'f')
        printf("Pension amt 5000 inr");
    else if (age < 60 && gen == 'f')
        printf("Pension amt 0 inr");
}