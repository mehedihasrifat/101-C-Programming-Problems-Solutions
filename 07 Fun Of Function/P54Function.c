#include <stdio.h>

void hello_world();

int main()
{
    hello_world();

    return 0;
}

void hello_world()
{
    printf("Hello!! I am from inside of a function\n");

    return;
}