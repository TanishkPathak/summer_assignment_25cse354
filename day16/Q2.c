#include <stdio.h>

int main()
{
    int a[100], n, i, j;
    int maxFreq = 0, freq, maxElement;

    printf("Enter number of elements: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    for(i = 0; i < n; i++)
    {
        freq = 1;

        for(j = i + 1; j < n; j++)
        {
            if(a[i] == a[j])
            {
                freq++;
            }
        }

        if(freq > maxFreq)
        {
            maxFreq = freq;
            maxElement = a[i];
        }
    }

    printf("Maximum frequency element = %d\n", maxElement);
    printf("Frequency = %d\n", maxFreq);

    return 0;
}