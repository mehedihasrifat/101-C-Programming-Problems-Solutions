#include <stdio.h>

int main()
{
    int a, b, x, y;

    printf("Enter the value of a,b, x and y: ");
    scanf("%d %d %d %d", &a, &b, &x, &y);

    printf("%d\n", (a * b) + (x * y));

    return 0;
}