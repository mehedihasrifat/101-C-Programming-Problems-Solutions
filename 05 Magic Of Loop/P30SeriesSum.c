#include <stdio.h>

int main()
{
    int sum = 0;

    for (int i = 101; i > 0; i = i - 2)
    {
        sum = sum + i;
    }

    printf("Sum: %d\n", sum);

    return 0;
}