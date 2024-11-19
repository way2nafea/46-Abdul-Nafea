/*
  Roll No.: 13
  Student Name:Sameera Khan
  Program Title:Write a program in c to calculate determinant of 3x3 matrix.

  Task Given By:
    - Roll No. of Assignee:34
    - Assignee Name:Tamanna Jaiswar
*/
#include<stdio.h>
int main(){
    //define an array
    int matrix[3][3];
    int determinant;
    //Take input elements from the user
    printf("Enter the elements of 3x3 matrix:\n");
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            printf("Element [%d][%d]:", i+1, j+1);
            scanf("%d", &matrix[i][j]);
        }
    }
    //display the matrix 
    printf("\nThe entered matrix is:\n");
    for(int i = 0; i<3; i++){
        for(int j = 0; j<3; j++){
            printf("%d\t",matrix[i][j]);
        }
        printf("\n");
    }
    //calculate the determinant
    determinant = matrix[0][0] * (matrix[1][1] * matrix[2][2] - matrix[1][2] * matrix[2][1])
                - matrix[0][1] * (matrix[1][0] * matrix[2][2] - matrix[1][2] * matrix[2][0])
                + matrix[0][2] * (matrix[1][0] * matrix[2][1] - matrix[1][1] * matrix[2][0]);
                 
                //remove output of the determinant
                printf("\nThe determinant of the matrix is: %d\n", determinant);
    return 0;
}
/*
   OUTPUT
Enter the elements of the 3x3 matrix row by row:
Element [1][1]: 2
Element [1][2]: 1
Element [1][3]: 3
Element [2][1]: 4
Element [2][2]: 5
Element [2][3]: 6
Element [3][1]: 7
Element [3][2]: 8
Element [3][3]: 9

The entered matrix is:
2       1       3
4       5       6
7       8       9

The determinant of the matrix is: -12
*/