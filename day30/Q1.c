#include <stdio.h>
#include <string.h>

int main()
{
    int roll[100], n = 0, choice, i, searchRoll, found;
    char name[100][50];
    float marks[100];

    do
    {
        printf("\n===== Student Record System =====\n");
        printf("1. Add Student\n");
        printf("2. Display All Students\n");
        printf("3. Search Student by Roll Number\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nEnter Roll Number: ");
            scanf("%d", &roll[n]);

            printf("Enter Student Name: ");
            scanf(" %[^\n]", name[n]);

            printf("Enter Marks: ");
            scanf("%f", &marks[n]);

            n++;
            printf("Student Record Added Successfully!\n");
            break;

        case 2:
            if (n == 0)
            {
                printf("\nNo student records available.\n");
            }
            else
            {
                printf("\n----- Student Records -----\n");
                printf("Roll\tName\t\tMarks\n");
                for (i = 0; i < n; i++)
                {
                    printf("%d\t%-15s%.2f\n", roll[i], name[i], marks[i]);
                }
            }
            break;

        case 3:
            if (n == 0)
            {
                printf("\nNo records available.\n");
                break;
            }

            printf("Enter Roll Number to Search: ");
            scanf("%d", &searchRoll);

            found = 0;
            for (i = 0; i < n; i++)
            {
                if (roll[i] == searchRoll)
                {
                    printf("\nStudent Found!\n");
                    printf("Roll Number : %d\n", roll[i]);
                    printf("Name        : %s\n", name[i]);
                    printf("Marks       : %.2f\n", marks[i]);
                    found = 1;
                    break;
                }
            }

            if (!found)
            {
                printf("Student Record Not Found!\n");
            }
            break;

        case 4:
            printf("Exiting Program...\n");
            break;

        default:
            printf("Invalid Choice! Please Try Again.\n");
        }

    } while (choice != 4);

    return 0;
}