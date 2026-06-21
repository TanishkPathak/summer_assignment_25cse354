#include <stdio.h>

// Function to check palindrome
int isPalindrome(int n)
{
    int original, reverse = 0, rem;

    original = n;

    while (n != 0)
    {
        rem = n % 10;
        reverse = reverse * 10 + rem;
        n = n / 10;
    }

    if (original == reverse)
        return 1;
    else
        return 0;
}

int main()
{
    int num;

    printf("Enter a number: ");
    scanf("%d", &num);

    if (isPalindrome(num))
        printf("%d is a Palindrome number.\n", num);
    else
        printf("%d is not a Palindrome number.\n", num);

    return 0;
}