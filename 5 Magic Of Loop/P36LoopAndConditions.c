#include <stdio.h>

int main()
{
    int N;

    printf("Enter the value for N: ");
    scanf("%d", &N);

    if (N == -1)
    {
        return 0;
    }
    else if (N > -32)
    {
        for (int i = N; i >= -32; i--)
        {
            printf("%d\n", i);
        }
    }
    else
    {
        for (int i = N; i <= -32; i++)
        {
            printf("%d\n", i);
        }
    }

    return 0;
}