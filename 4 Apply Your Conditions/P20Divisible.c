#include <stdio.h>

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (num % 3 == 0 && num % 5 == 0)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

    return 0;
}