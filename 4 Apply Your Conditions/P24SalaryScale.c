#include <stdio.h>

int main()
{
    int rank;

    printf("Enter your rank: ");
    scanf("%d", &rank);

    if (rank == 1)
    {
        printf("Salary: 2,50,000 BDT\n");
    }
    else if (rank == 2)
    {
        printf("Salary: 2,10,000 BDT\n");
    }
    else if (rank == 3)
    {
        printf("Salary: 1,50,000 BDT\n");
    }
    else if (rank == 4)
    {
        printf("Salary: 80,000 BDT\n");
    }
    else if (rank >= 5)
    {
        printf("Salary: 50,000 BDT\n");
    }

    return 0;
}