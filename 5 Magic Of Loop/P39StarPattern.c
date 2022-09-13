// Written by Mehedi Hasan Rifat in C on 13th September, 2022 with Visual Studio Code

#include <stdio.h>

int main()
{
    for (int i = 5; i >= 1; i = i - 2)
    {
        if (i == 3)
        {
            printf("  ");
        }
        else if (i == 1)
        {
            printf("    ");
        }

        for (int j = 1; j <= i; j++)
        {
            printf("* ");
        }

        printf("\n");
    }

    for (int k = 3; k <= 5; k = k + 2)
    {
        if (k == 3)
        {
            printf("  ");
        }

        for (int l = 1; l <= k; l++)
        {
            printf("* ");
        }

        printf("\n");
    }

    return 0;
}