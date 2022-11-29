/**
 * @file P43Prime2.c
 * @author Mehedi Hasan Rifat (mehedihasanrifat@gmail.com)
 * @brief This is a program which will display all the prime numbers between 0 to N
 * @version 0.1
 * @date 2022-09-15
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <stdio.h>

int main()
{
    int n, count = 0;

    printf("Enter a value for N (integer): ");

    scanf("%d", &n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i % j == 0)
            {
                count++;
            }
        }

        if (count == 2)
        {
            printf("%d ", i);
        }

        count = 0;
    }

    printf("\n");

    return 0;
}