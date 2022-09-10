#include <stdio.h>

int main()
{
    char letter;

    printf("Enter a small letter: ");
    scanf("%c", &letter);

    printf("%c\n", letter - 32);

    return 0;
}