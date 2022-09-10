#include <stdio.h>

int main()
{
    char alpha;

    printf("Enter any small letter: ");
    scanf("%c", &alpha);

    if (alpha == 'a' || alpha == 'e' || alpha == 'i' || alpha == 'o' || alpha == 'u')
    {
        printf("%c is a VOWEL\n", alpha);
    }
    else
    {
        printf("%c is a consonant\n", alpha);
    }

    return 0;
}