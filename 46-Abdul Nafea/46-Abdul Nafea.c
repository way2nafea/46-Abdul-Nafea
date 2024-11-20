/*
  Roll No.      : 46
  Student Name  : Nakade Abdul Nafea
  Program Title : WAP to generate Pascal’s Triangle up to n rows using a 2D array.

  Task Given By:
    - Roll No. of Assignee  : 29
    - Assignee Name         : Patel Ayaz
*/
#include <stdio.h>

void generatePascalsTriangle(int n) {
    int triangle[n][n]; // Declare a 2D array

    // Generate Pascal's Triangle
    for (int i = 0; i < n; i++) {
        for (int j = 0; j <= i; j++) {
            if (j == 0 || j == i) {
                triangle[i][j] = 1; // First and last values in each row are 1
            } else {
                triangle[i][j] = triangle[i - 1][j - 1] + triangle[i - 1][j];
            }
            printf("%d ", triangle[i][j]); // Print each value
        }
        printf("\n"); // Move to the next row
    }
}

int main() {
    int n;

    // Input the number of rows
    do {
        printf("Enter the number of rows for Pascal's Triangle (non-negative): ");
        if (scanf("%d", &n) != 1) { // Validate if the input is an integer
            printf("Invalid input. Please enter a non-negative integer.\n");
            while (getchar() != '\n'); // Clear the input buffer
            n = -1; // Set to an invalid value to prompt re-entry
        } else if (n < 0) {
            printf("Number of rows cannot be negative. Please try again.\n");
        }
    } while (n < 0);

    // Handle case when n = 0
    if (n == 0) {
        printf("Pascal's Triangle with 0 rows is empty.\n");
    } else {
        // Generate and print Pascal's Triangle
        generatePascalsTriangle(n);
    }

    return 0;
}
/*
OUTPUT
Enter the number of rows for Pascal's Triangle (non-negative): 4
1
1 1
1 2 1
1 3 3 1
*/
