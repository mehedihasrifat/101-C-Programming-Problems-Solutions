#include <stdio.h>

double find_max(double x, double y, double z);

int main()
{
    double n1, n2, n3;

    printf("Enter three numbers: ");
    scanf("%lf %lf %lf", &n1, &n2, &n3);

    double max = find_max(n1, n2, n3);

    printf("Max: %lf\n", max);

    return 0;
}

double find_max(double num1, double num2, double num3)
{
    double max = num1;

    if (max < num2)
    {
        max = num2;
    }
    if (max < num3)
    {
        max = num3;
    }

    return max;
}