#include <stdio.h>

struct Employee
{
    int id;
    char name[50];
    float basicSalary;
    float hra;
    float da;
    float grossSalary;
};

int main()
{
    struct Employee emp[100];
    int n = 0, choice, i, id, found;

    do
    {
        printf("\n===== Salary Management System =====\n");
        printf("1. Add Employee Salary\n");
        printf("2. Display All Salaries\n");
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

            printf("Enter Basic Salary: ");
            scanf("%f", &emp[n].basicSalary);

            // Calculate HRA (20%) and DA (10%)
            emp[n].hra = emp[n].basicSalary * 0.20;
            emp[n].da = emp[n].basicSalary * 0.10;

            emp[n].grossSalary = emp[n].basicSalary + emp[n].hra + emp[n].da;

            printf("Salary Record Added Successfully!\n");
            n++;
            break;

        case 2:
            if (n == 0)
            {
                printf("\nNo salary records found.\n");
            }
            else
            {
                printf("\n===== Employee Salary Details =====\n");
                for (i = 0; i < n; i++)
                {
                    printf("\nEmployee ID   : %d", emp[i].id);
                    printf("\nName          : %s", emp[i].name);
                    printf("\nBasic Salary  : %.2f", emp[i].basicSalary);
                    printf("\nHRA (20%%)     : %.2f", emp[i].hra);
                    printf("\nDA (10%%)      : %.2f", emp[i].da);
                    printf("\nGross Salary  : %.2f\n", emp[i].grossSalary);
                }
            }
            break;

        case 3:
            printf("\nEnter Employee ID to Search: ");
            scanf("%d", &id);

            found = 0;
            for (i = 0; i < n; i++)
            {
                if (emp[i].id == id)
                {
                    printf("\nEmployee Found!");
                    printf("\nEmployee ID   : %d", emp[i].id);
                    printf("\nName          : %s", emp[i].name);
                    printf("\nBasic Salary  : %.2f", emp[i].basicSalary);
                    printf("\nHRA           : %.2f", emp[i].hra);
                    printf("\nDA            : %.2f", emp[i].da);
                    printf("\nGross Salary  : %.2f\n", emp[i].grossSalary);
                    found = 1;
                    break;
                }
            }

            if (!found)
            {
                printf("\nEmployee not found.\n");
            }
            break;

        case 4:
            printf("\nExiting Salary Management System...\n");
            break;

        default:
            printf("\nInvalid Choice! Please try again.\n");
        }

    } while (choice != 4);

    return 0;
}