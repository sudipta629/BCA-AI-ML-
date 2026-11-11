
#include <stdio.h>

int main()
{
    int pin, correctPin = 1234;
    int amount;
    int balance = 10000;

    printf("===== WELCOME TO ATM =====\n");

    printf("Enter your ATM PIN: ");
    scanf("%d", &pin);

    if (pin == correctPin)
    {
        printf("\nPIN Verified Successfully!\n");

        printf("Enter withdrawal amount: ");
        scanf("%d", &amount);

        
        if (amount <= 0)
        {
            printf("Invalid Amount\n");
        }
        else if (amount % 100 != 0)
        {
            printf("Enter Amount in Multiples of 100\n");
        }
        else if (amount > balance)
        {
            printf("Insufficient Balance\n");
        }
        else
        {
            balance = balance - amount;

            printf("\nWithdrawal Successful!\n");
            printf("Withdrawn Amount: Rs. %d\n", amount);
            printf("Remaining Balance: Rs. %d\n", balance);
        }
    }
    else
    {
        printf("Incorrect PIN\n");
    }

    return 0;
}

