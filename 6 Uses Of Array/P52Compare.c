#include <stdio.h>

int main()
{
    float a[5], b[5], a_sum = 0, b_sum = 0, a_average, b_average;
    for (int i = 0; i < 5; i++)
    {
        scanf("%f %f", &a[i], &b[i]);

        a_sum = a_sum + a[i];
        b_sum = b_sum + b[i];
    }

    a_average = a_sum / 5.0;
    b_average = b_sum / 5.0;

    if (a_average > b_average)
    {
        printf("Avg: %0.2f -> A\n", a_average);
    }
    else
    {
        printf("Avg: %0.2f -> B\n", b_average);
    }

    return 0;
}