#include <stdio.h>
#include <string.h>

struct Contact
{
    char name[50];
    char phone[15];
    char email[50];
};

int main()
{
    struct Contact contact[100];
    int n = 0, choice, i, found;
    char searchName[50];

    do
    {
        printf("\n===== Contact Management System =====\n");
        printf("1. Add Contact\n");
        printf("2. Display All Contacts\n");
        printf("3. Search Contact\n");
        printf("4. Delete Contact\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nEnter Name: ");
            scanf(" %[^\n]", contact[n].name);

            printf("Enter Phone Number: ");
            scanf("%s", contact[n].phone);

            printf("Enter Email: ");
            scanf("%s", contact[n].email);

            n++;
            printf("Contact Added Successfully!\n");
            break;

        case 2:
            if (n == 0)
            {
                printf("\nNo Contacts Available!\n");
            }
            else
            {
                printf("\n===== Contact List =====\n");
                for (i = 0; i < n; i++)
                {
                    printf("\nContact %d\n", i + 1);
                    printf("Name  : %s\n", contact[i].name);
                    printf("Phone : %s\n", contact[i].phone);
                    printf("Email : %s\n", contact[i].email);
                }
            }
            break;

        case 3:
            found = 0;
            printf("\nEnter Name to Search: ");
            scanf(" %[^\n]", searchName);

            for (i = 0; i < n; i++)
            {
                if (strcmp(contact[i].name, searchName) == 0)
                {
                    printf("\nContact Found!\n");
                    printf("Name  : %s\n", contact[i].name);
                    printf("Phone : %s\n", contact[i].phone);
                    printf("Email : %s\n", contact[i].email);
                    found = 1;
                    break;
                }
            }

            if (!found)
                printf("Contact Not Found!\n");
            break;

        case 4:
            found = 0;
            printf("\nEnter Name to Delete: ");
            scanf(" %[^\n]", searchName);

            for (i = 0; i < n; i++)
            {
                if (strcmp(contact[i].name, searchName) == 0)
                {
                    int j;
                    for (j = i; j < n - 1; j++)
                    {
                        contact[j] = contact[j + 1];
                    }
                    n--;
                    found = 1;
                    printf("Contact Deleted Successfully!\n");
                    break;
                }
            }

            if (!found)
                printf("Contact Not Found!\n");
            break;

        case 5:
            printf("Exiting Contact Management System...\n");
            break;

        default:
            printf("Invalid Choice! Please Try Again.\n");
        }

    } while (choice != 5);

    return 0;
}