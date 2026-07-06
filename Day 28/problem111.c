#include <stdio.h>

int main()
{
    int totalSeats = 10;
    int bookedSeats = 0;
    int choice, seats;

    do
    {
        printf("\n===== TICKET BOOKING SYSTEM =====\n");
        printf("1. Book Ticket\n");
        printf("2. Check Available Seats\n");
        printf("3. Cancel Ticket\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Enter number of tickets: ");
                scanf("%d", &seats);

                if(seats <= 0)
                {
                    printf("Invalid number of tickets.\n");
                }
                else if(bookedSeats + seats <= totalSeats)
                {
                    bookedSeats += seats;
                    printf("Ticket booked successfully.\n");
                }
                else
                {
                    printf("Not enough seats available.\n");
                }
                break;

            case 2:
                printf("Total Seats     : %d\n", totalSeats);
                printf("Booked Seats    : %d\n", bookedSeats);
                printf("Available Seats : %d\n", totalSeats - bookedSeats);
                break;

            case 3:
                printf("Enter number of tickets to cancel: ");
                scanf("%d", &seats);

                if(seats <= 0)
                {
                    printf("Invalid number of tickets.\n");
                }
                else if(seats <= bookedSeats)
                {
                    bookedSeats -= seats;
                    printf("Ticket cancelled successfully.\n");
                }
                else
                {
                    printf("Cancellation not possible.\n");
                }
                break;

            case 4:
                printf("Thank You.\n");
                break;

            default:
                printf("Invalid choice.\n");
        }

    } while(choice != 4);

    return 0;
}