#include <stdio.h>

float calculateTotal(float a, float b, float c);
float calculateAverage(float total);
void displayGrade(float average);
void displayStatus(float average);

int main(void)
{
    float cProgramming, mathematics, electronics;
    float total, average;

    printf("Enter C Programming score: ");
    scanf("%f", &cProgramming);

    printf("Enter Mathematics score: ");
    scanf("%f", &mathematics);

    printf("Enter Electronics score: ");
    scanf("%f", &electronics);

    total = calculateTotal(cProgramming, mathematics, electronics);
    average = calculateAverage(total);

    printf("\n--------- STUDENT RESULT ---------\n");
    printf("C Programming: %.2f\n", cProgramming);
    printf("Mathematics: %.2f\n", mathematics);
    printf("Electronics: %.2f\n", electronics);
    printf("Total Score: %.2f\n", total);
    printf("Average Score: %.2f\n", average);

    printf("Grade: ");
    displayGrade(average);

    printf("Status: ");
    displayStatus(average);

    return 0;
}

float calculateTotal(float a, float b, float c)
{
    return a + b + c;
}

float calculateAverage(float total)
{
    return total / 3.0f;
}

void displayGrade(float average)
{
    if (average >= 80 && average <= 100)
    {
        printf("A\n");
    }
    else if (average >= 70)
    {
        printf("B\n");
    }
    else if (average >= 60)
    {
        printf("C\n");
    }
    else if (average >= 50)
    {
        printf("D\n");
    }
    else
    {
        printf("F\n");
    }
}

void displayStatus(float average)
{
    if (average >= 50)
    {
        printf("PASS\n");
    }
    else
    {
        printf("FAIL\n");
    }
}
