#include <stdio.h>

int abs_value(int num); // This function will return the absolute value of a real number on the number line

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    int abs = abs_value(num);

    printf("Absolute value: %d\n", abs);
}

int abs_value(int num)
{
    if (num < 0)
        return num * (-1);
    else
        return num * (1);
}