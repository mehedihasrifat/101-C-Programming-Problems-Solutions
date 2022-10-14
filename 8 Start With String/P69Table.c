#include <stdio.h>

int main()
{
    char str[100];

    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'x' && str[i] <= 'z')
        {
            printf("%c", str[i] - 23);
        }
        else
        {
            printf("%c", str[i] + 3);
        }
    }

    printf("\n");

    return 0;
}