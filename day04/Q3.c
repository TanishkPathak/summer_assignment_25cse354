#include <stdio.h>
#include <math.h>

int main()
{
    int num, originalNum, remainder, n = 0;
    int result = 0;

    printf("Enter a number: ");
    scanf("%d", &num);

    originalNum = num;

    // Count number of digits
    while (originalNum != 0)
    {
        originalNum /= 10;
        n++;
    }

    originalNum = num;

    // Calculate sum of digits raised to power n
    while (originalNum != 0)
    {
        remainder = originalNum % 10;
        result += pow(remainder, n);
        originalNum /= 10;
    }

    // Check Armstrong number
    if (result == num)
        printf("%d is an Armstrong number.", num);
    else
        printf("%d is not an Armstrong number.", num);

    return 0;
}