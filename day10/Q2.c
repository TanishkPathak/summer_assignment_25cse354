#include <stdio.h>

int main()
{
    int i, j, space;

    for (i = 5; i >= 1; i--)
    {
        // Print spaces
        for (space = 5; space > i; space--)
        {
            printf(" ");
        }

        // Print stars
        for (j = 1; j <= (2 * i - 1); j++)
        {
            printf("*");
        }

        printf("\n");
    }

    return 0;
}