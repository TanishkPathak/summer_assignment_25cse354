#include <stdio.h>

int main()
{
    long long n, i, largestFactor = -1;

    printf("Enter a number: ");
    scanf("%lld", &n);

    while (n % 2 == 0)
    {
        largestFactor = 2;
        n = n / 2;
    }

    for (i = 3; i * i <= n; i += 2)
    {
        while (n % i == 0)
        {
            largestFactor = i;
            n = n / i;
        }
    }

    if (n > 2)
        largestFactor = n;

    printf("Largest Prime Factor = %lld\n", largestFactor);

    return 0;
}