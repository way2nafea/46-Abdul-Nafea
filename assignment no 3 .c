/*
  Roll No.: 12
  Student Name: Piyush chande
  Program Title:  To find leap year 

  Task Given By:
    - Roll No. of Assignee: 9
    - Assignee Name: Priyanshu Jaiswar 
*/
    #include <stdio.h>

int main() {
    int year;

    // Input the year
    printf("Enter a year: ");
    scanf("%d", &year);

    // Check for leap year
    if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
        printf("%d is a leap year.\n", year);
    } else {
        printf("%d is not a leap year.\n", year);
    }

    return 0;
}
/* Output 

Enter a year: 2024
2024 is a leap year.

Enter a year: 2025
2025 is not a leap year.
*/
    