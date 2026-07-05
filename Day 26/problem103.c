#include <stdio.h>

int main()
{
    int pin = 1234;
    int enteredPin;
    int choice;
    float balance = 10000, amount;

    printf("Enter your PIN: ");
    scanf("%d", &enteredPin);

    if(enteredPin != pin)
    {
        printf("Incorrect PIN.");
        return 0;
    }

    do
    {
        printf("\nATM Menu\n");
        printf("1. Check Balance\n");
        printf("2. Deposit\n");
        printf("3. Withdraw\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch(choice)
        {
            case 1:
                printf("Your balance is %.2f\n", balance);
                break;

            case 2:
                printf("Enter deposit amount: ");
                scanf("%f", &amount);
                if(amount > 0)
                {
                    balance += amount;
                    printf("Deposit successful. New balance = %.2f\n", balance);
                }
                else
                {
                    printf("Invalid amount.\n");
                }
                break;

            case 3:
                printf("Enter withdrawal amount: ");
                scanf("%f", &amount);
                if(amount > 0 && amount <= balance)
                {
                    balance -= amount;
                    printf("Withdrawal successful. New balance = %.2f\n", balance);
                }
                else
                {
                    printf("Insufficient balance or invalid amount.\n");
                }
                break;

            case 4:
                printf("Thank you for using ATM.\n");
                break;

            default:
                printf("Invalid choice.\n");
        }

    } while(choice != 4);

    return 0;
}