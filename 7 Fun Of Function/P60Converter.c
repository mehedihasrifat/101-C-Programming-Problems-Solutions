#include <stdio.h>

float dollarToBDT(float dollar);

int main()
{
    float dollar, bdt;

    printf("Enter the dollar amount: ");
    scanf("%f", &dollar);

    bdt = dollarToBDT(dollar);

    printf("BDT: %0.2ftk.\n", bdt);

    return 0;
}

float dollarToBDT(float dollar)
{
    float bdt = dollar * 104.55; // According to October 7, 2022

    return bdt;
}