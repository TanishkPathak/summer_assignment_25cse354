#include <stdio.h>

int main()
{
    int a[100], n, i, temp;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    // Store last element
    temp = a[n - 1];

    // Shift elements to the right
    for (i = n - 1; i > 0; i--)
    {
        a[i] = a[i - 1];
    }

    // Place last element at first position
    a[0] = temp;

    printf("Array after right rotation:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}