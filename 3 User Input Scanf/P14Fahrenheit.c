#include <stdio.h>

int main()
{
    double celsius, fahrenheit;

    printf("Celsius: ");
    scanf("%lf", &celsius);

    fahrenheit = (celsius * (9 / 5.0) + 32);

    printf("Fahrenheit: %0.1lfF\n", fahrenheit);

    return 0;
}