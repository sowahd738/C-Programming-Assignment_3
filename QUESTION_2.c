#include <stdio.h>

int add(int a, int b);

int main(void)
{
    int firstNumber, secondNumber, sum;

    printf("Enter first number: ");
    scanf("%d", &firstNumber);

    printf("Enter second number: ");
    scanf("%d", &secondNumber);

    sum = add(firstNumber, secondNumber);

    printf("Sum = %d\n", sum);

    return 0;
}

int add(int a, int b)
{
    return a + b;
}
