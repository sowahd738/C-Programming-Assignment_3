#include <stdio.h>

int findLargest(int a, int b, int c);

int main(void)
{
    int firstNumber, secondNumber, thirdNumber;
    int largest;

    printf("Enter first number: ");
    scanf("%d", &firstNumber);

    printf("Enter second number: ");
    scanf("%d", &secondNumber);

    printf("Enter third number: ");
    scanf("%d", &thirdNumber);

    largest = findLargest(firstNumber, secondNumber, thirdNumber);

    printf("Largest Number = %d\n", largest);

    return 0;
}

int findLargest(int a, int b, int c)
{
    int largest;

    if (a >= b && a >= c)
    {
        largest = a;
    }
    else if (b >= a && b >= c)
    {
        largest = b;
    }
    else
    {
        largest = c;
    }

    return largest;
}
