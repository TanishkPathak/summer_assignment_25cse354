#include <stdio.h>

int main()
{
    int i, j, k, n = 5;

    for (i = 1; i <= n; i++)
    {
        // Print spaces
        for (j = 1; j <= n - i; j++)
        {
            printf(" ");
        }

        // Print ascending characters
        for (j = 0; j < i; j++)
        {
            printf("%c", 'A' + j);
        }

        // Print descending characters
        for (k = i - 2; k >= 0; k--)
        {
            printf("%c", 'A' + k);
        }

        printf("\n");
    }

    return 0;
}