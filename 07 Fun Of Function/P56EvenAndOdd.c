#include <stdio.h>

void even_odd(int n);

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    even_odd(num);

    return 0;
}

void even_odd(int n)
{
    if (n % 2 == 0)
    {
        printf("EVEN\n");
    }
    else
    {
        printf("ODD\n");
    }

    return;
}