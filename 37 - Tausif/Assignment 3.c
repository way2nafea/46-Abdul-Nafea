/*
  Roll No.: 37
  Student Name: Ansari Tausif Raghib Akram
  Program Title: Mall Billing System

  Task Given By: 
    - Roll No. of Assignee: 2
    - Assignee Name: Nakul Vishwakarma
*/
#include <stdio.h>
#include <string.h>

#define MAX_ITEMS 100

struct Item {
    char name[50];
    int quantity;
    float price;
    float total;
};

int main() {
    struct Item items[MAX_ITEMS];
    int itemCount = 0;
    char choice;
    float grandTotal = 0;

    printf("\t\t\t\tWelcome to Phoenix Mall Billing System\n");
    printf("\t\t\t\t--------------------------------------\n");

    // Input items
    do {
        printf("\nEnter details for item %d:\n", itemCount + 1);
        printf("Name\t\t: ");
        getchar();  // Clear the newline character in the input buffer
        fgets(items[itemCount].name, sizeof(items[itemCount].name), stdin);
        items[itemCount].name[strcspn(items[itemCount].name, "\n")] = '\0';  // Remove newline character

        printf("Quantity\t: ");
        scanf("%d", &items[itemCount].quantity);

        printf("Price per unit\t: ");
        scanf("%f", &items[itemCount].price);

        items[itemCount].total = items[itemCount].quantity * items[itemCount].price;
        grandTotal += items[itemCount].total;
        itemCount++;

        printf("\nDo you want to add another item? (y/n): ");
        getchar();  // Clear the newline character
        scanf("%c", &choice);

    } while (choice == 'y' || choice == 'Y');

    // Display the bill
    printf("\n\n-------------------- BILL --------------------\n\n");
    printf("%-20s %-10s %-10s %-10s\n", "Item Name", "Quantity", "Price", "Total");
    printf("-------------------------------------------------\n");
    for (int i = 0; i < itemCount; i++) {
        printf("%-20s %-10d %-10.2f %-10.2f\n", items[i].name, items[i].quantity, items[i].price, items[i].total);
    }
    printf("-------------------------------------------------\n");
    printf("Grand Total: %.2f\n", grandTotal);
    printf("-------------------------------------------------\n");
    printf("Thank you for shopping with us!\n");

    return 0;
}
/*
----> Output
                                Welcome to Phoenix Mall Billing System
                                --------------------------------------

Enter details for item 1:
Name            : Polo T shirts
Quantity        : 4
Price per unit  : 250

Do you want to add another item? (y/n): y

Enter details for item 2:
Name            : Jeans
Quantity        : 2
Price per unit  : 900

Do you want to add another item? (y/n): n


-------------------- BILL --------------------

Item Name            Quantity   Price      Total
-------------------------------------------------
Polo T shirts        4          250.00     1000.00
Jeans                2          900.00     1800.00
-------------------------------------------------
Grand Total: 2800.00
-------------------------------------------------
Thank you for shopping with us!
*/