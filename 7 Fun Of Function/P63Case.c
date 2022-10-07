#include <stdio.h>

char UpperCase(char ch); // This function takes the ascii value of a character as a parameter

int main()
{
    char ch;

    printf("Enter a character: ");
    scanf(" %c", &ch);

    int uppercase = UpperCase(ch);

    printf("Upper Case: %c\n", uppercase);

    return 0;
}

char UpperCase(char ch)
{
    ch = ch - 32;

    return ch;
}