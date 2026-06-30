#include <stdio.h>

struct BankAccount
{
    int accountNumber;
    char name[50];
    float balance;
};

int main()
{
    struct BankAccount account;
    int choice;
    float amount;

    printf("===== Bank Account Management System =====\n");

    printf("Enter Account Number: ");
    scanf("%d", &account.accountNumber);

    printf("Enter Account Holder Name: ");
    scanf(" %[^\n]", account.name);

    printf("Enter Initial Balance: ");
    scanf("%f", &account.balance);

    do
    {
        printf("\n===== MENU =====\n");
        printf("1. Deposit Money\n");
        printf("2. Withdraw Money\n");
        printf("3. Check Balance\n");
        printf("4. Account Details\n");
        printf("5. Exit\n");

        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("Enter Deposit Amount: ");
            scanf("%f", &amount);

            if (amount > 0)
            {
                account.balance += amount;
                printf("Amount Deposited Successfully!\n");
            }
            else
            {
                printf("Invalid Amount!\n");
            }
            break;

        case 2:
            printf("Enter Withdrawal Amount: ");
            scanf("%f", &amount);

            if (amount <= 0)
            {
                printf("Invalid Amount!\n");
            }
            else if (amount > account.balance)
            {
                printf("Insufficient Balance!\n");
            }
            else
            {
                account.balance -= amount;
                printf("Amount Withdrawn Successfully!\n");
            }
            break;

        case 3:
            printf("Current Balance: %.2f\n", account.balance);
            break;

        case 4:
            printf("\n===== Account Details =====\n");
            printf("Account Number : %d\n", account.accountNumber);
            printf("Account Holder : %s\n", account.name);
            printf("Balance         : %.2f\n", account.balance);
            break;

        case 5:
            printf("Thank You for Using Bank Account Management System!\n");
            break;

        default:
            printf("Invalid Choice! Please Try Again.\n");
        }

    } while (choice != 5);

    return 0;
}