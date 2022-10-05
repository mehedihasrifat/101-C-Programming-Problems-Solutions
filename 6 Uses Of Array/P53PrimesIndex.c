#include <stdio.h>

int main()
{
    int ara[] = {1, 23, 10, 15, 17, 21, 44, 43, 53}, count = 0;

    for (int i = 0; i < 9; i++)
    {
        for (int j = 1; j <= ara[i]; j++)
        {
            if (ara[i] % j == 0)
            {
                count++;
            }
        }

        if (count == 2)
        {
            printf("%d is a PRIME number\n", ara[i]);
        }

        count = 0;
    }

    return 0;
}