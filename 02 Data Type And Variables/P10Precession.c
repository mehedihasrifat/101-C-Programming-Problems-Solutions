#include <stdio.h>

int main()
{
    double phy = 65.00, math = 83.50, c = 85.75, eng = 67.50;
    double average = (phy + math + c + eng) / 4;

    printf("%0.2lf\n", average);

    return 0;
}