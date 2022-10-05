#include <stdio.h>

int main()
{
    float a[5], b[5], ab[5];

    for (int i = 0; i < 5; i++)
    {
        scanf("%f %f", &a[i], &b[i]);

        ab[i] = a[i] + b[i];
    }

    for (int i = 0; i < 5; i++)
    {
        printf("%f\n", ab[i]);
    }

    return 0;
}