#include <stdio.h>

int main()
{
    int a[100], n, sum, i, j, found = 0;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    printf("Enter required sum: ");
    scanf("%d", &sum);

    printf("Pairs with sum %d are:\n", sum);

    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(a[i] + a[j] == sum)
            {
                printf("(%d, %d)\n", a[i], a[j]);
                found = 1;
            }
        }
    }

    if(found == 0)
    {
        printf("No pair found.\n");
    }

    return 0;
}