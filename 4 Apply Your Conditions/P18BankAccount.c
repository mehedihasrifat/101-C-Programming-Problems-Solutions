#include <stdio.h>

int main()
{
    int age;

    printf("Enter your age: ");
    scanf("%d", &age);

    if (age >= 18)
    {
        printf("Yes\n");
    }
    else
    {
        printf("No\n");
    }

    return 0;
}