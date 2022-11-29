#include <stdio.h>

double national_flag(double length); // This function returns the area of the national by taking the length from the main function given by the user

int main()
{
    double length;

    printf("Enter the length of the national flag: ");
    scanf("%lf", &length);

    double area = national_flag(length);

    printf("Area of the national flag: %0.2lf\n", area);

    return 0;
}

double national_flag(double length)
{
    double width = (length * 6) / 10.0;
    double area = length * width;

    return area;
}