#include <stdio.h>

int main()
{
    double ssc_gpa;

    printf("Enter your SSC GPA: ");
    scanf("%lf", &ssc_gpa);

    if (ssc_gpa == 5.00)
    {
        printf("YES\n");
    }
    else
    {
        printf("NO\n");
    }

    return 0;
}