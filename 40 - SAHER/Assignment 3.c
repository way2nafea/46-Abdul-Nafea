/*
  Roll No.: 40
  Student Name: Saher Patel
  Program Title: WAP to find the body mass index of the user when user enters height and weight.
                 Also find the BMI category to which the user belongs.

  Task Given By:
    - Roll No. of Assignee: 42
    - Assignee Name: Misbah Reshamwalla
*/

#include<stdio.h>

int main() {
    float weight, height, BMI;

    printf("\t\t\t\t *** BODY MASS INDEX *** \n\n\n");

    Start :
// TAKE INPUT OF WEIGHT & HEIGHT FROM USER

    printf("Enter weight (in kg): ");
    scanf("%f", &weight);

    printf("Enter height (in meters): ");
    scanf("%f", &height);

// Calculate BMI

    BMI = weight / (height * height);

    printf("Your BMI is: %.2f\n", BMI);

// Determine the BMI category

    if (BMI < 18.5) {
        printf("You are underweight.\n");
    } else if (BMI >= 18.5 && BMI < 24.9) {
        printf("You have a normal weight.\n");
    } else if (BMI >= 25 && BMI < 29.9) {
        printf("You are overweight.\n");
    } else {
        printf("You are obese.\n");
    }
    goto Start;

return 0;
}

/*OUTPUT
                               *** BODY MASS INDEX ***

Enter weight (in kg): 40
Enter height (in meters): 1.54
Your BMI is: 16.87
You are underweight.

Enter weight (in kg): 45
Enter height (in meters): 1.51
Your BMI is: 19.74
You have a normal weight.

Enter weight (in kg): 65
Enter height (in meters): 1.56
Your BMI is: 26.71
You are overweight.

Enter weight (in kg): 90
Enter height (in meters): 1.72
Your BMI is: 30.42
You are obese.

*/
