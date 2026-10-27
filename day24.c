#include <stdio.h>

int main()
{
    int days, fine;

    printf("Enter the number of late days: ");
    scanf("%d", &days);

    if(days <= 5)
    {
        fine = days * 2;
    }
    else if(days <= 10)
    {
        fine = days * 5;
    }
    else
    {
        fine = days * 10;
    }

    printf("Library Fine = Rs.%d", fine);

    return 0;
}