#include <stdio.h>

int main()
{
    for (int i = 1; i <= 7; i++)
    {
        for (int j = 1; j <= i; j++)
        {
            if (i % 2 == 0)
            {
                printf("Blank Line");
                break;
            }
            else
            {
                printf("* ");
            }
        }

        printf("\n");
    }

    return 0;
}