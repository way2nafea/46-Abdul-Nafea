/*Assignment.No:3

  Roll No.:42
  Student Name:Misbah Reshamwalla
  Program Title:WAP to calculate the gross salary of the employee given the bsic salary.

  Task Given By:
    - Roll No. of Assignee:40
    - Assignee Name:Saher Patel
*/
#include<stdio.h>
int main(){
    float basic,da,hra,salary;
    char d[50];
    printf("\t\t***Employee salary details***\n");
    start:
    printf("\nEnter Your Name:");
    scanf(" %s",&d);
    printf("\nEnter your basic salary:");
    scanf("%f",&basic);
    //calculate the da,hra and salary
    da=basic*40/100;
    hra=basic*25/100;
    salary=basic+da+hra;
    //Displaying the details
    printf("\nYour name is: %s",d);
    printf("\nSalary details:%.1f",salary);
    printf("\nBasic salary is:%.1f",basic);
    printf("\nDearness Allowance is:%.1f",da);
    printf("\nHouse Rent Allowance is:%.1f",hra);

    if(salary>=80000){
        printf("\nYou are CEO");
    }
    else if(salary>=50000){
        printf("\nYou are Manager");
    }
    else if(salary>=25000){
        printf("\nYou are sales manager");
    }
    else if(salary>=20000){
        printf("\nYou are Clerk");
    }
    else if(salary>=10000){
       printf("\nYou are Intern");
    }

    goto start;
    return 0;

}
/*    ****OUTPUT****
 ***Employee salary details***

Enter Your Name:Misbah

Enter your basic salary:90000

Your name is: Misbah
Salary details:148500.0
Basic salary is:90000.0
Dearness Allowance is:36000.0
House Rent Allowance is:22500.0
You are CEO
Enter Your Name:Nora
Enter your basic salary:45000

Your name is: Nora
Salary details:74250.0
Basic salary is:45000.0
Dearness Allowance is:18000.0
House Rent Allowance is:11250.0
You are Manager
Enter Your Name:Raj

Enter your basic salary:15000
Your name is: Raj
Salary details:24750.0
Basic salary is:15000.0
Dearness Allowance is:6000.0
House Rent Allowance is:3750.0
You are Clerk
*/