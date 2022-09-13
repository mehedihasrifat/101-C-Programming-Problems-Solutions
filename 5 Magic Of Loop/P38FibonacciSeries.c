// Written by Mehedi Hasan Rifat

#include <stdio.h>

int main()
{
    int n, first = 0, second = 1, fibo = 0;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (fibo <= n)
    {
        printf("%d ", fibo);
        first = second;
        second = fibo;
        fibo = first + second;
    }

    return 0;
}