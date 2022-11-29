#include <stdio.h>

int add(int a, int b)
{
    int sum = a + b;

    return sum;
}

int main()
{
    int num1, num2;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    int sum = add(num1, num2);

    printf("The sum is %d\n", sum);

    return 0;
}