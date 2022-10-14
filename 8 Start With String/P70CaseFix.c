#include <stdio.h>

int main()
{
    char str[100];
    int is_word_started = 0;

    scanf("%s", str);

    for (int i = 0; str[i] != '\0'; i++)
    {
        if (str[i] >= 'a' && str[i] <= 'z')
        {
            if (is_word_started == 0)
            {
                is_word_started = 1;

                str[i] = 'A' + (str[i] - 'a');

                printf("%c", str[i]);
            }
            else
            {
                printf("%c", str[i]);
            }
        }
        else if (str[i] >= 'A' && str[i] <= 'Z')
        {
            if (is_word_started == 0)
            {
                is_word_started = 1;

                printf("%c", str[i]);
            }
            else
            {
                printf("%c", str[i] + 32);
            }
        }
    }

    printf("\n");

    return 0;
}