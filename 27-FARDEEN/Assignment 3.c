/*
  Roll No.:     27

  Student Name: Fardeen Khan

  Program Title: Wap to find the GCD of two numbers entered by the user.

  Task Given By:

  Roll No. of Assignee: 30

  Assignee Name: Shah Sufiyan
  
*/
    #include <stdio.h>

    // Declaring Function to calculate GCD of two numbers.

    int gcd(int a, int b)
    {
        while (b != 0)
        {
            int temp = b;
            b = a % b;
            a = temp;
        }
        return a;
    }

    int main()
    {
        int num1, num2;

        // Taking input from the.

        printf("Enter two numbers: ");
        scanf("%d %d", &num1, &num2);

        // Calculating GCD after calling the function.

        int result = gcd(num1, num2);

        // Displaying the result.

        printf("The GCD of %d and %d is %d\n", num1, num2, result);



        return 0;
    }





/*
OUTPUT:

Enter two numbers: 6
9
The GCD of 6 and 9 is 3

*/
