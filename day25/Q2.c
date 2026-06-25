#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];
    int i, j, found;

    printf("Enter first string: ");
    scanf("%s", str1);

    printf("Enter second string: ");
    scanf("%s", str2);

    printf("Common characters: ");

    for(i = 0; str1[i] != '\0'; i++)
    {
        found = 0;

        for(j = 0; j < i; j++)
        {
            if(str1[i] == str1[j])
            {
                found = 1;
                break;
            }
        }

        if(found)
            continue;

        for(j = 0; str2[j] != '\0'; j++)
        {
            if(str1[i] == str2[j])
            {
                printf("%c ", str1[i]);
                break;
            }
        }
    }

    return 0;
}