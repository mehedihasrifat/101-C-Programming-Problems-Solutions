#include <stdio.h>

int string_length(char str[]);

int main()
{
    char s[100];

    printf("Enter a string: ");
    scanf("%s", s);

    printf("Length: %d\n", string_length(s));

    return 0;
}

int string_length(char str[])
{
    int i;

    for (i = 0; str[i] != '\0'; i++)
        ;

    return i;
}