#include <stdio.h>

int main()
{
    int sum = 0;

    for (int i = 5; i <= 25; i++)
    {
        sum = sum + (i * i);
    }

    printf("Sum: %d\n", sum);

    return 0;
}