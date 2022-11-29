#include <stdio.h>

void print_sum(int a, int b)
{
    int sum = a + b;

    printf("%d\n", sum);

    return;
}

int main()
{
    int n1, n2;

    printf("Enter two numbers: ");
    scanf("%d %d", &n1, &n2);

    print_sum(n1, n2);

    return 0;
}