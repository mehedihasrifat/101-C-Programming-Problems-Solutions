#include <stdio.h>

int main()
{
    char str[50];

    gets(str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        printf("%c\n", str[i]);
    }

    return 0;
}