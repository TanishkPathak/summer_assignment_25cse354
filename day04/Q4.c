#include <stdio.h>
#include <math.h>

int main()
{
    int start, end, num, temp, rem, digits, sum;

    printf("Enter the starting number: ");
    scanf("%d", &start);

    printf("Enter the ending number: ");
    scanf("%d", &end);

    printf("Armstrong numbers between %d and %d are:\n", start, end);

    for (num = start; num <= end; num++)
    {
        temp = num;
        digits = 0;
        sum = 0;

        // Count digits
        while (temp != 0)
        {
            digits++;
            temp /= 10;
        }

        temp = num;

        // Calculate sum of digits raised to power of digits
        while (temp != 0)
        {
            rem = temp % 10;
            sum += pow(rem, digits);
            temp /= 10;
        }

        // Check Armstrong number
        if (sum == num)
        {
            printf("%d ", num);
        }
    }

    return 0;
}