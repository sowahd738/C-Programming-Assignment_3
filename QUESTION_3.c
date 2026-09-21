#include <stdio.h>

int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);
float divide(float a, float b);

int main(void)
{
    int firstNumber, secondNumber;

    printf("Enter first number: ");
    scanf("%d", &firstNumber);

    printf("Enter second number: ");
    scanf("%d", &secondNumber);

    printf("Addition = %d\n", add(firstNumber, secondNumber));
    printf("Subtraction = %d\n", subtract(firstNumber, secondNumber));
    printf("Multiplication = %d\n", multiply(firstNumber, secondNumber));

    if (secondNumber != 0)
    {
        printf("Division = %.2f\n",
               divide((float)firstNumber, (float)secondNumber));
    }
    else
    {
        printf("Division by zero is not allowed.\n");
    }

    return 0;
}

int add(int a, int b)
{
    return a + b;
}

int subtract(int a, int b)
{
    return a - b;
}

int multiply(int a, int b)
{
    return a * b;
}

float divide(float a, float b)
{
    return a / b;
}
