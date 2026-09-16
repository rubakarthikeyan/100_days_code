#include <stdio.h>

int main()
{
    int arr[5], i, sum = 0;
    int *p;

    p = arr;

    printf("Enter 5 elements:\n");
    for(i = 0; i < 5; i++)
    {
        scanf("%d", p + i);
    }
    printf("Array elements are:\n");
    for(i = 0; i < 5; i++)
    {
        printf("%d ", *(p + i));
    }

    for(i = 0; i < 5; i++)
    {
        sum = sum + *(p + i);
    }
    printf("\nSum = %d", sum);

    return 0;
}