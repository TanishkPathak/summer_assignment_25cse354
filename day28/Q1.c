#include <stdio.h>
#include <string.h>

struct Book
{
    int id;
    char title[50];
    char author[50];
    int quantity;
};

int main()
{
    struct Book book[100];
    int n = 0, choice, id, i, found;

    do
    {
        printf("\n===== Library Management System =====\n");
        printf("1. Add Book\n");
        printf("2. Display All Books\n");
        printf("3. Search Book by ID\n");
        printf("4. Issue Book\n");
        printf("5. Return Book\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("\nEnter Book ID: ");
                scanf("%d", &book[n].id);

                printf("Enter Book Title: ");
                scanf(" %[^\n]", book[n].title);

                printf("Enter Author Name: ");
                scanf(" %[^\n]", book[n].author);

                printf("Enter Quantity: ");
                scanf("%d", &book[n].quantity);

                n++;
                printf("Book Added Successfully!\n");
                break;

            case 2:
                if(n == 0)
                {
                    printf("\nNo Books Available!\n");
                }
                else
                {
                    printf("\n===== Book List =====\n");
                    for(i = 0; i < n; i++)
                    {
                        printf("\nBook %d\n", i + 1);
                        printf("ID       : %d\n", book[i].id);
                        printf("Title    : %s\n", book[i].title);
                        printf("Author   : %s\n", book[i].author);
                        printf("Quantity : %d\n", book[i].quantity);
                    }
                }
                break;

            case 3:
                printf("Enter Book ID to Search: ");
                scanf("%d", &id);

                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(book[i].id == id)
                    {
                        printf("\nBook Found!\n");
                        printf("ID       : %d\n", book[i].id);
                        printf("Title    : %s\n", book[i].title);
                        printf("Author   : %s\n", book[i].author);
                        printf("Quantity : %d\n", book[i].quantity);
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                {
                    printf("Book Not Found!\n");
                }
                break;

            case 4:
                printf("Enter Book ID to Issue: ");
                scanf("%d", &id);

                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(book[i].id == id)
                    {
                        found = 1;
                        if(book[i].quantity > 0)
                        {
                            book[i].quantity--;
                            printf("Book Issued Successfully!\n");
                        }
                        else
                        {
                            printf("Book Out of Stock!\n");
                        }
                        break;
                    }
                }

                if(found == 0)
                {
                    printf("Book Not Found!\n");
                }
                break;

            case 5:
                printf("Enter Book ID to Return: ");
                scanf("%d", &id);

                found = 0;

                for(i = 0; i < n; i++)
                {
                    if(book[i].id == id)
                    {
                        book[i].quantity++;
                        printf("Book Returned Successfully!\n");
                        found = 1;
                        break;
                    }
                }

                if(found == 0)
                {
                    printf("Book Not Found!\n");
                }
                break;

            case 6:
                printf("Exiting Library Management System...\n");
                break;

            default:
                printf("Invalid Choice! Please Try Again.\n");
        }

    } while(choice != 6);

    return 0;
}