/*  Assignment no: 3
    Title        : Banking system to withdraw or deposit money
    Name         : Shaikh Afrah Rafiq.
    Div          : D
    UIN          : 241P128/57
    Partner      : Pawar Arpita
    UIN          : 241P123/53
*/
#include <stdio.h>

float balance = 2000.0;  // Initial balance

void checkBalance() {
    printf("Your current balance is: $%.2f\n", balance);
}

//Depositing the money
void depositMoney() {
    float amount;
    printf("Enter the amount to deposit: ");
    scanf("%f", &amount);
    if (amount > 0) {
        balance += amount;
        printf("You have successfully deposited $%.2f\n", amount);
    } else {
        printf("Invalid deposit amount.\n");
    }
}

//withdrawal of money
void withdrawMoney() {
    float amount;
    printf("Enter the amount to withdraw: ");
    scanf("%f", &amount);
    if (amount > 0 && amount <= balance) {
        balance -= amount;
        printf("You have successfully withdrawn $%.2f\n", amount);
    } else if (amount > balance) {
        printf("Insufficient balance.\n");
    } else {
        printf("Invalid withdrawal amount.\n");
    }
}

int main() {
    int choice;

    do {
        // Display menu
        printf("\nWelcome to the Banking System\n");
        printf("1. Check Balance\n");
        printf("2. Deposit Money\n");
        printf("3. Withdraw Money\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

         //cases
        switch (choice) {
            case 1:
                checkBalance();
                break;
            case 2:
                depositMoney();
                break;
            case 3:
                withdrawMoney();
                break;
            case 4:
                printf("Thank you for using the Banking System. Goodbye!\n");
                break;
            default:
                printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 4);

    return 0;
}
/* OUTPUT

Welcome to the Banking System
1. Check Balance
2. Deposit Money
3. Withdraw Money
4. Exit
Enter your choice: 1
Your current balance is: $1000.00

Welcome to the Banking System
1. Check Balance
2. Deposit Money
3. Withdraw Money
4. Exit
Enter your choice: 2
Enter the amount to deposit: 6000
You have successfully deposited $6000.00

Welcome to the Banking System
1. Check Balance
2. Deposit Money
3. Withdraw Money
4. Exit
Enter your choice: 3
Enter the amount to withdraw: 8000
Insufficient balance.

Welcome to the Banking System
1. Check Balance
2. Deposit Money
3. Withdraw Money
4. Exit
Enter your choice: 3
Enter the amount to withdraw: 4000
You have successfully withdrawn $4000.00

Welcome to the Banking System
1. Check Balance
2. Deposit Money
3. Withdraw Money
4. Exit
Enter your choice: 4
Thank you for using the Banking System. Goodbye!

*/
