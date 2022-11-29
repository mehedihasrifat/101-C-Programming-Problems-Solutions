#include <stdio.h>

int main()
{
    char str1[] = "We";
    char str2[] = "Love";
    char str3[] = "Bangladesh";
    char str4[35];
    int j = 0;

    for (int i = 0; str1[i] != '\0'; i++)
    {
        str4[j++] = str1[i];
    }

    str4[j++] = ' ';

    for (int i = 0; str2[i] != '\0'; i++)
    {
        str4[j++] = str2[i];
    }

    str4[j++] = ' ';

    for (int i = 0; str3[i] != '\0'; i++)
    {
        str4[j++] = str3[i];
    }

    str4[j] = '\0';

    printf("%s\n", str4);

    return 0;
}