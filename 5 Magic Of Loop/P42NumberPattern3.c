/**
 * @file P42NumberPattern3.c
 * @author Mehedi Hasan Rifat (mehedihasrifat@gmail.com)
 * @brief This program produces a special number pattern
 * @version 0.1
 * @date 2022-09-15
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <stdio.h>

int main()
{
    int i, j, sum = 0;

    for (i = 1; i <= 6; i++)
    {
        for (j = 1; j <= i; j++)
        {
            sum = sum + i;

            printf("%d ", sum);
        }

        printf("\n");

        sum = 0;
    }

    return 0;
}