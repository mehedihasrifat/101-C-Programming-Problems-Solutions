#include <stdio.h>
#include <string.h>

int main()
{
    char str[1000];
    int i;
    int arr[123];

    scanf("%s", str);

    for (i = 0; i < 123; i++)
    {
        arr[i] = 0;
    }

    for (i = 0; i < strlen(str); i++)
    {
        arr[str[i]]++;
    }

    for (i = 0; i < 123; i++)
    {
        if (arr[i] != 0)
        {
            printf("%c(%d)", i, arr[i]);
        }
    }

    printf("\n");

    return 0;
}