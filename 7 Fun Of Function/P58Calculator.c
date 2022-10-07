/**
 * @file P58Calculator.c
 * @author Mehedi Hasan Rifat (mehedihasrifat@gmail.com)
 * @brief This is a simple calculator
 * @version 0.1
 * @date 2022-10-07
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <stdio.h>

double add(double n1, double n2);
double subtract(double n1, double n2);
double multiply(double n1, double n2);
double divide(double n1, double n2);

int main()
{
    double num1, num2, addition, subtraction, multiplication, division;
    int decision;

    printf("\n\nWelcome to my calculator!\n\n");
    printf("1 for Addition, 2 for Subtraction, 3 for Multiplication, 4 for Division\n\n: ");
    scanf("%d", &decision);

    if (decision == 1)
    {
        printf("Enter the value for num1: ");
        scanf("%lf", &num1);
        printf("Enter the value for num2: ");
        scanf("%lf", &num2);

        addition = add(num1, num2);

        printf("Addition: %lf\n", addition);
    }
    else if (decision == 2)
    {
        printf("Enter the value for num1: ");
        scanf("%lf", &num1);
        printf("Enter the value for num2: ");
        scanf("%lf", &num2);

        subtraction = subtract(num1, num2);

        printf("Subtraction: %lf\n", subtraction);
    }
    else if (decision == 3)
    {
        printf("Enter the value for num1: ");
        scanf("%lf", &num1);
        printf("Enter the value for num2: ");
        scanf("%lf", &num2);

        multiplication = multiply(num1, num2);

        printf("Multiplication: %lf\n", multiplication);
    }
    else if (decision == 4)
    {
        printf("Enter the value for num1: ");
        scanf("%lf", &num1);
        printf("Enter the value for num2: ");
        scanf("%lf", &num2);

        division = divide(num1, num2);

        printf("Division: %lf\n", division);
    }
    else
    {
        printf("Invalid input!\n");
    }

    return 0;
}

double add(double n1, double n2)
{
    double addition = n1 + n2;

    return addition;
}

double subtract(double n1, double n2)
{
    double subtraction = n1 - n2;

    return subtraction;
}

double multiply(double n1, double n2)
{
    double multplication = n1 * n2;

    return multplication;
}

double divide(double n1, double n2)
{
    double division = n1 / n2;

    return division;
}