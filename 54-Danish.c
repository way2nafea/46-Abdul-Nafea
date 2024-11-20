/*
  Roll No.:54
  UIN : 241P125
  Student Name:Danish Sayyed
  Program Title:Implementing Stack Using Arrays:  Write a program
                that implements a stack (LIFO data structure) using arrays. Include functions for push,
                pop, and display operations, with error handling for stack overflow and underflow.


  Task Given By:
    - Roll No. of Assignee: 23
    - Assignee Name: Zaidi Shaz Zahrah
*/

#include <stdio.h>
#include <stdlib.h>  // For exit()

// Define the maximum size of the stack
#define MAX_SIZE 100

// Declare the stack and related variables
int stack[MAX_SIZE];
int top = -1;  // Initialize stack as empty

// Function to push an element onto the stack
void push(int item) {
    if (top >= MAX_SIZE - 1) {
        printf("Error: Stack Overflow! Cannot push %d.\n", item);
        return;
    }
    stack[++top] = item;
    printf("Pushed %d onto the stack.\n", item);
}

// Function to pop an element from the stack
int pop() {
    if (top < 0) {
        printf("Error: Stack Underflow! Stack is empty.\n");
        return -1;  // Return -1 to indicate failure
    }
    int popped_item = stack[top--];
    printf("Popped %d from the stack.\n", popped_item);
    return popped_item;
}

// Function to display the current state of the stack
void display() {
    if (top < 0) {
        printf("Stack is empty.\n");
        return;
    }
    printf("Current stack elements (top to bottom):\n");
    for (int i = top; i >= 0; i--) {
        printf("%d\n", stack[i]);
    }
}

// Main function
int main() {
    int choice, item;

    printf("Stack Implementation Using Arrays\n");
    printf("---------------------------------\n");

    while (1) {
        printf("\nMenu:\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice (1-4): ");
        scanf("%d", &choice);

        switch (choice) {
            case 1:
                printf("Enter the element to push: ");
                scanf("%d", &item);
                push(item);
                break;

            case 2:
                pop();
                break;

            case 3:
                display();
                break;

            case 4:
                printf("Exiting program. Goodbye!\n");
                exit(0);

            default:
                printf("Invalid choice! Please enter a number between 1 and 4.\n");
        }
    }

    return 0;
}

/*

Stack Implementation Using Arrays
---------------------------------

Menu:
1. Push
2. Pop
3. Display
4. Exit
Enter your choice (1-4): 1
Enter the element to push: 10
Pushed 10 onto the stack.

Menu:
1. Push
2. Pop
3. Display
4. Exit
Enter your choice (1-4): 1
Enter the element to push: 20
Pushed 20 onto the stack.

Menu:
1. Push
2. Pop
3. Display
4. Exit
Enter your choice (1-4): 3
Current stack elements (top to bottom):
20
10

Menu:
1. Push
2. Pop
3. Display
4. Exit
Enter your choice (1-4): 2
Popped 20 from the stack.

Menu:
1. Push
2. Pop
3. Display
4. Exit
Enter your choice (1-4): 4
Exiting program. Goodbye!

*/
