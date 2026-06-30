#include <stdio.h>
#include <string.h>

struct Employee
{
    int id;
    char name[50];
    float salary;
};

int main()
{
    struct Employee emp[100];
    int n = 0, choice, id, i, found;

    do
    {
        printf("\n===== Mini Employee Management System =====\n");
        printf("1. Add Employee\n");
        printf("2. Display All Employees\n");
        printf("3. Search Employee by ID\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nEnter Employee ID: ");
            scanf("%d", &emp[n].id);

            printf("Enter Employee Name: ");
            scanf(" %[^\n]", emp[n].name);

            printf("Enter Employee Salary: ");
            scanf("%f", &emp[n].salary);

            n++;
            printf("Employee Added Successfully!\n");
            break;

        case 2:
            if (n == 0)
            {
                printf("\nNo employee records available.\n");
            }
            else
            {
                printf("\n----- Employee Records -----\n");
                printf("ID\tName\t\tSalary\n");
                for (i = 0; i < n; i++)
                {
                    printf("%d\t%-15s%.2f\n",
                           emp[i].id,
                           emp[i].name,
                           emp[i].salary);
                }
            }
            break;

        case 3:
            if (n == 0)
            {
                printf("\nNo employee records available.\n");
                break;
            }

            printf("\nEnter Employee ID to Search: ");
            scanf("%d", &id);

            found = 0;
            for (i = 0; i < n; i++)
            {
                if (emp[i].id == id)
                {
                    printf("\nEmployee Found!\n");
                    printf("ID     : %d\n", emp[i].id);
                    printf("Name   : %s\n", emp[i].name);
                    printf("Salary : %.2f\n", emp[i].salary);
                    found = 1;
                    break;
                }
            }

            if (!found)
            {
                printf("Employee not found.\n");
            }
            break;

        case 4:
            printf("\nExiting Employee Management System...\n");
            break;

        default:
            printf("\nInvalid choice! Please try again.\n");
        }

    } while (choice != 4);

    return 0;
}