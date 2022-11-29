#include <stdio.h>

int main()
{
    int ara[3][3], sum = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &ara[i][j]);

            sum = sum + ara[i][j];
        }
    }

    printf("Average: %0.2lf\n", sum / 9.0);

    return 0;
}