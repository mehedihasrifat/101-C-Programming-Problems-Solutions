#include <stdio.h>

int main()
{
    int n, first = 0, second = 1, temp;

    printf("Enter a number: ");
    scanf("%d", &n);

    while (first <= n)
    {
        printf("%d ", first);
        temp = first;
        first = second;
        second = second + temp;
    }

    return 0;
}