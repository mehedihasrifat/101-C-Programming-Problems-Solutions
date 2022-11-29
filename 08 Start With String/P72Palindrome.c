#include <stdio.h>
#include <string.h>

int main()
{
    char str[100];
    int length, i, flag = 0;

    scanf("%s", str);

    length = strlen(str) - 1;

    for (i = 0; i < length / 2; i++)
    {
        if (str[i] == str[length - i])
        {
            flag = 1;
        }
        else
        {
            flag = 0;
        }
    }

    if (length == 0)
    {
        flag = 1;
    }

    if (flag == 0)
    {
        printf("No, It is not a palindrome\n");
    }
    else
    {
        printf("YES, It is a palindrome\n");
    }

    return 0;
}