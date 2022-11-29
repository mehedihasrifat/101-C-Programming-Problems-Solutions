#include <stdio.h>

int main()
{
    int ara[5], count = 0;

    for (int i = 0; i < 5; i++)
    {
        scanf("%d", &ara[i]);

        if (ara[i] > 100)
        {
            count++;
        }
    }

    printf("\n%d\n", count);

    return 0;
}