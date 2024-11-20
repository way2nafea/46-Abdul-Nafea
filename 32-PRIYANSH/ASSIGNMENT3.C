/*  NAME:PRIYANSH GANGAN
    ASSIGNMENT NO:3
    TITLE:WAP TO SORT ELEMENTS IN AN ARRAY IN ASCENDING ORDER
    ROLL NO:32
    UIN:241P101
    BRANCH:COMP(02)-D


    TASK GIVEN BY:-
    NAME:ANISH THAKUR
    ROLL NO:35
    UIN:241P104     */

#include<stdio.h>    //HEADER FILE

void main(){          //main function

    printf("\t\t\t**To sort the elements in Ascending order**\n\n");

    int a [10];

    int i,j,t;


    //input
    printf("Enter 10 Elements for an Array\n");

    for(int u=0;u<10;u++){

        scanf("%d",&a[u]);

    }

    //printing array
    printf("\nThe Elements of the Array are:\n");

     for(int u=0;u<10;u++){

        printf("%d ",a[u]);

    }

    printf("\n\nSorting the Elements of the Array\n\n");

    //sorting the array in ascending order
    for( i=0;i<9;i++){

        for(j=0;j<9-i;j++){

            if(a[j]>a[j+1]){

            t=a[j];
            a[j]=a[j+1];
            a[j+1]=t;

            }  //end of if loop
        }  //end of inner for loop

    }   //end of outer for loop

    //printing sorted elements
    printf("The sorted Elements of an Array are:\n");

     for(i=0;i<10;i++){

        printf("%d ",a[i]);

    }



return 0;
}

/*      OUTPUT
                      **To sort the elements in Ascending order**

Enter 10 Elements for an Array
8989
77
156
67
12
4
10
5323
54
69

The Elements of the Array are:
8989 77 156 67 12 4 10 5323 54 69

Sorting the Elements of the Array

The sorted Elements of an Array are:
4 10 12 54 67 69 77 156 5323 8989     */