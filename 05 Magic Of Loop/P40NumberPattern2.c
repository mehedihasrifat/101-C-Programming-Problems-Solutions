/**
 * @file P40NumberPattern3.c
 * @author Mehedi Hasan Rifat (mehedihasrifat@gmail.com)
 * @brief This program prints a number pattern
 * @version 0.1
 * @date 2022-09-15
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <stdio.h>

int main()
{
    int i, j, k;

    for (i = 1; i <= 5; i++)
    {
        for (j = 1; j <= i; j++)
        {
            printf("%d", j);
        }

        printf(" ");

        for (k = i; k >= 1; k--)
        {
            printf("%d", k);
        }

        printf("\n");
    }

    return 0;
}