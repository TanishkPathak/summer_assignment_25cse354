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

    // Store first element
    temp = a[0];

    // Shift elements to the left
    for (i = 0; i < n - 1; i++)
    {
        a[i] = a[i + 1];
    }

    // Place first element at the end
    a[n - 1] = temp;

    printf("Array after left rotation:\n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", a[i]);
    }

    return 0;
}