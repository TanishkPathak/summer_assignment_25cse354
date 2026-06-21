#include <stdio.h>
#include <math.h>

// Function to check Armstrong number
int isArmstrong(int n)
{
    int original, remainder, digits = 0;
    int sum = 0;

    original = n;

    // Count digits
    while (n != 0)
    {
        digits++;
        n = n / 10;
    }

    n = original;

    // Calculate sum of powers of digits
    while (n != 0)
    {
        remainder = n % 10;
        sum += pow(remainder, digits);
        n = n / 10;
    }

    if (sum == original)
        return 1;
    else
        return 0;
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isArmstrong(num))
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);

    return 0;
}