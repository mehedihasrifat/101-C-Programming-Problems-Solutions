#include <stdio.h>

int main()
{
    int ara[3][3], sum = 0;

    for (int i = 0; i < 3; i++)
    {
        for (int j = 0; j < 3; j++)
        {
            scanf("%d", &ara[i][j]);

            if (ara[i][j] == ara[0][0] || ara[i][j] == ara[1][1] || ara[i][j] == ara[2][2])
            {
                sum = sum + ara[i][j];
            }
        }
    }

    printf("Summation: %d\n", sum);

    return 0;
}