#include <stdio.h>
#include <string.h>

int main()
{
    char s[100], t = 0;

    printf("Enter a string: ");

    scanf("%s", s);

    for (int i = 0, j = 9; i < strlen(s) / 2; i++, j--)
    {
        t = s[i];
        s[i] = s[j];
        s[j] = t;
    }

    printf("%s\n", s);

    return 0;
}