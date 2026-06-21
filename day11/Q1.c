#include <stdio.h>

// Function to find sum of two numbers
int sum(int a, int b)
{
    return a + b;
}

int main()
{
    int num1, num2, result;

    printf("Enter two numbers: ");
    scanf("%d %d", &num1, &num2);

    result = sum(num1, num2);

    printf("Sum = %d\n", result);

    return 0;
}