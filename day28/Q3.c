#include <stdio.h>
#include <string.h>

struct Ticket
{
    int seatNo;
    char name[50];
    int booked;
};

int main()
{
    struct Ticket ticket[10];
    int i, choice, seat, found;

    // Initialize seats
    for (i = 0; i < 10; i++)
    {
        ticket[i].seatNo = i + 1;
        ticket[i].booked = 0;
        strcpy(ticket[i].name, "");
    }

    do
    {
        printf("\n===== Ticket Booking System =====\n");
        printf("1. View Available Seats\n");
        printf("2. Book Ticket\n");
        printf("3. Cancel Ticket\n");
        printf("4. Display Booked Tickets\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nAvailable Seats:\n");
            for (i = 0; i < 10; i++)
            {
                if (ticket[i].booked == 0)
                    printf("Seat %d\n", ticket[i].seatNo);
            }
            break;

        case 2:
            printf("Enter Seat Number (1-10): ");
            scanf("%d", &seat);

            if (seat < 1 || seat > 10)
            {
                printf("Invalid Seat Number!\n");
            }
            else if (ticket[seat - 1].booked)
            {
                printf("Seat Already Booked!\n");
            }
            else
            {
                printf("Enter Passenger Name: ");
                scanf(" %[^\n]", ticket[seat - 1].name);
                ticket[seat - 1].booked = 1;
                printf("Ticket Booked Successfully!\n");
            }
            break;

        case 3:
            printf("Enter Seat Number to Cancel: ");
            scanf("%d", &seat);

            if (seat < 1 || seat > 10)
            {
                printf("Invalid Seat Number!\n");
            }
            else if (ticket[seat - 1].booked == 0)
            {
                printf("Seat is Not Booked!\n");
            }
            else
            {
                ticket[seat - 1].booked = 0;
                strcpy(ticket[seat - 1].name, "");
                printf("Ticket Cancelled Successfully!\n");
            }
            break;

        case 4:
            printf("\nBooked Tickets:\n");
            found = 0;
            for (i = 0; i < 10; i++)
            {
                if (ticket[i].booked)
                {
                    printf("Seat No: %d\tPassenger: %s\n",
                           ticket[i].seatNo,
                           ticket[i].name);
                    found = 1;
                }
            }
            if (!found)
                printf("No Tickets Booked.\n");
            break;

        case 5:
            printf("Thank You for Using Ticket Booking System!\n");
            break;

        default:
            printf("Invalid Choice! Please Try Again.\n");
        }

    } while (choice != 5);

    return 0;
}