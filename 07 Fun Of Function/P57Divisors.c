#include <stdio.h>

void divisors(int num);

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    divisors(num);

    return 0;
}

void divisors(int num)
{
    for (int i = 1; i <= num; i++)
    {
        if (num % i == 0)
        {
            printf("%d\n", i);
        }
    }

    return;
}