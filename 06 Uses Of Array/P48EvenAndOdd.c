#include <stdio.h>

int main()
{
    int ara[5], odd_sum = 0, even_sum = 0;

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &ara[i]);

        if (ara[i] % 2 == 0)
        {
            even_sum = even_sum + ara[i];
        }
        else
        {
            odd_sum = odd_sum + ara[i];
        }
    }

    printf("\nValues in array: ");

    for (int i = 0; i < 5; i++)
    {
        printf("%d ", ara[i]);
    }

    printf("\n\nSum of odd values: %d\n\n", odd_sum);
    printf("Sum of even values: %d\n", even_sum);

    return 0;
}