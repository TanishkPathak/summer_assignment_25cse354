#include <stdio.h>
#include <string.h>

int main()
{
    char str1[100], str2[100];
    int choice;

    printf("Enter First String: ");
    scanf(" %[^\n]", str1);

    do
    {
        printf("\n===== MENU-DRIVEN STRING OPERATIONS =====\n");
        printf("1. Find Length\n");
        printf("2. Copy String\n");
        printf("3. Concatenate Strings\n");
        printf("4. Compare Strings\n");
        printf("5. Reverse String\n");
        printf("6. Convert to Uppercase\n");
        printf("7. Convert to Lowercase\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Length of String = %lu\n", strlen(str1));
            break;

        case 2:
            strcpy(str2, str1);
            printf("Copied String: %s\n", str2);
            break;

        case 3:
            printf("Enter Second String: ");
            scanf(" %[^\n]", str2);

            {
                char temp[200];
                strcpy(temp, str1);
                strcat(temp, str2);
                printf("Concatenated String: %s\n", temp);
            }
            break;

        case 4:
            printf("Enter Second String: ");
            scanf(" %[^\n]", str2);

            if (strcmp(str1, str2) == 0)
                printf("Both strings are Equal.\n");
            else
                printf("Both strings are Not Equal.\n");
            break;

        case 5:
        {
            char rev[100];
            int i, len;

            len = strlen(str1);

            for (i = 0; i < len; i++)
            {
                rev[i] = str1[len - i - 1];
            }

            rev[len] = '\0';

            printf("Reversed String: %s\n", rev);
            break;
        }

        case 6:
        {
            char upper[100];
            int i = 0;

            while (str1[i] != '\0')
            {
                if (str1[i] >= 'a' && str1[i] <= 'z')
                    upper[i] = str1[i] - 32;
                else
                    upper[i] = str1[i];
                i++;
            }
            upper[i] = '\0';

            printf("Uppercase String: %s\n", upper);
            break;
        }

        case 7:
        {
            char lower[100];
            int i = 0;

            while (str1[i] != '\0')
            {
                if (str1[i] >= 'A' && str1[i] <= 'Z')
                    lower[i] = str1[i] + 32;
                else
                    lower[i] = str1[i];
                i++;
            }
            lower[i] = '\0';

            printf("Lowercase String: %s\n", lower);
            break;
        }

        case 8:
            printf("Exiting Program...\n");
            break;

        default:
            printf("Invalid Choice!\n");
        }

    } while (choice != 8);

    return 0;
}