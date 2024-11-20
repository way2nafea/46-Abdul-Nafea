/*
  Roll No.:20
  Student Name:shaikh mohd zia mohammed kalid parvez
  Program Title:caloific value determiner

  Task Given By:
    - Roll No. of Assignee: 22
    - Assignee Name:khan aamir nawaz
*/
#include <stdio.h>

int main() {
    float percentageC, percentageH, percentageO, percentageS;
    float gcv, ncv;

    // Input the percentages
    printf("Enter the percentage of C, H, O, S (in tabular format):\n");
    printf("C: ");
    scanf("%f", &percentageC);
    printf("H: ");
    scanf("%f", &percentageH);
    printf("O: ");
    scanf("%f", &percentageO);
    printf("S: ");
    scanf("%f", &percentageS);

    // Calculate GCV and NCV using the provided formulas
    gcv = (8080 * percentageC) + (34500 * (percentageH - (percentageO / 8))) + (2240 * percentageS);
    ncv = gcv - (0.9 * percentageH) + 587;

    // Output the results
    printf("\nResults:\n");
    printf("Gross Calorific Value (GCV): %.2f kcal/kg\n", gcv);
    printf("Net Calorific Value (NCV): %.2f kcal/kg\n", ncv);

    return 0;
}