/*
  Roll No.: 22
  Student Name: Khan Aamir Nawaz
  Program Title:  To print the following pattern and make it user interactive :
                    A
                    b  C
                    D  e  F
                    g  H  i  J

  Task Given By:
    - Roll No. of Assignee: 20
    - Assignee Name: Shaikh Mohammad Zia Mohd Khalid Parvez
*/
#include<stdio.h>
int main(){
    char upper[26],lower[26],loop;
    upper[0]='A';
    int n=4,k;
    for(int i = 0 ;i<26;i++){
        upper[i]=upper[0]+i;
        lower[i]=upper[i]+32;
    }
    printf("For Example when number of column is 4 : \n");
    goto l2;
l1: printf("Enter the number of column till you want it to repeat (should be less than or equal to 6): ");
    scanf("%d",&n);
    if(n>6){
        printf("invalid number please re-enter\n");
        goto l1;
    }
l2:
    k=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<=i;j++){
             if((i+j)%2==0){
                    printf("%c",upper[k++]);
                }
                else{
                    printf("%c",lower[k++]);

                }
        }
        printf("\n");
    }
    printf("do you wish to continue(enter y to continue) ? : ");
    scanf(" %c",&loop);
    if(loop=='y'){
        goto l1;
    }
    else{
        return 0;
    }
    return 1;
}
/*		Output
For Example when number of column is 4 :
A
b C
D e F
g H i J
do you wish to continue(enter y to continue) ? : y
Enter the number of column till you want it to repeat (should be less than or equal to 6): 7
invalid number please re-enter
Enter the number of column till you want it to repeat (should be less than or equal to 6): 6
A
b C
D e F
g H i J
K l M n O
p Q r S t U
do you wish to continue(enter y to continue) ? : n
    
*/
