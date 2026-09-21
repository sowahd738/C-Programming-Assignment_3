#include <stdio.h>

void checkEligibility(int age);

int main(void)
{
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    checkEligibility(age);

    return 0;
}

void checkEligibility(int age)
{
    if (age >= 18)
    {
        printf("You are eligible to vote.\n");
    }
    else
    {
        printf("You are not eligible to vote.\n");
    }
}
