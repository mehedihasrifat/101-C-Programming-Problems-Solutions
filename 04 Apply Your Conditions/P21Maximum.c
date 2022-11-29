#include <stdio.h>

int main()
{
    int n1, n2, n3;
    int max = 0;

    scanf("%d %d %d", &n1, &n2, &n3);

    if (max < n1)
    {
        max = n1;
    }
    if (max < n2)
    {
        max = n2;
    }
    if (max < n3)
    {
        max = n3;
    }

    printf("%d\n", max);

    return 0;
}