#include <stdio.h>

int main()
{
    int ara[] = {-99, 45, 100, 37, 89, -327, 245}, max = 0;

    for (int i = 0; i < 7; i++)
    {
        if (max < ara[i])
        {
            max = ara[i];
        }
    }

    printf("Max: %d\n", max);

    return 0;
}