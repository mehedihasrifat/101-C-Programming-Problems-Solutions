/**
 * @file P41Average2.c
 * @author Mehedi Hasan Rifat (mehedihasrifat@gmail.com)
 * @brief This program prints the summation and average of all the numbers which are completely divisible by 3, 5 and 12 between 10-500.
 * @version 0.1
 * @date 2022-09-15
 *
 * @copyright Copyright (c) 2022
 *
 */

#include <stdio.h>

int main()
{
    int count = 0, sum = 0;
    double avg = 0;

    for (int i = 10; i <= 500; i++)
    {
        if (i % 3 == 0 && i % 5 == 0 && i % 12 == 0)
        {
            sum = sum + i;
            count++;
        }
    }

    avg = sum / (double)count;

    printf("Summation: %d\tAverage: %.2f\n", sum, avg);

    return 0;
}