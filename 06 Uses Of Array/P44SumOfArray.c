#include <stdio.h>

int main()
{
    int ara[10], sum = 0;

    for (int i = 0; i < 10; i++)
    {
        scanf("%d", &ara[i]);
    }

    for (int i = 0; i < 10; i++)
    {
        sum = sum + ara[i];
    }

    printf("Sum: %d\n", sum);

    return 0;
}