# include <stdio.h>

int main (){
    // Q-1 : Write a program to find area and perimeter of rectangle.

        float length,width,area,perimeter;
        // Input lemgth and width
        printf("Enter length :");
        scanf("%f", &length);

        printf("Enter width : ");
        scanf("%f", &width);

        // Calculate area and perimeter
        area = length * width;
        perimeter = 2 * (length + width);

        // Output results
        printf("Area of the rectangle = %.2f\n", area);
        printf("Perimeter of the rectangle = %.2f\n", perimeter);

        return 0; 

    // Q-2 : Write a program to convert C to F temprature.

        float celsius, fahrenheit;

        // Input temperature in Celsius
        printf("Enter temperature in Celsius: ");
        scanf("%f", &celsius);

        // Formula to convert
        fahrenheit = (celsius * 9 / 5) + 32;

        // Output result
        printf("%.2f Celsius = %.2f Fahrenheit\n", celsius, fahrenheit);

        return 0;

    // Q-3 : Write a program print sum of two numbers.

        int a , b , sum ;
        // Enters numbers
        printf("Enter first number :");
        scanf("%d",&a);

        printf("Enter second number :");
        scanf("%d",&b);

        //  Calculate Sum
        sum = a + b;

        // print Result
        printf("Sum of %d and %d is : %d\n", a , b , sum);

        return 0;

    // Q-4 : Write a program to apply arithmetic operator mean of two integers.

        int a,b;
        float mean;

        // input two integers
        printf("Enter first integer :");
        scanf("%d", &a);

        printf("Enter second integer :");
        scanf("%d", &b);

        // Arithmetic operations
        printf("\nREsults of arithmetic operations :\n");
        printf("Addition        : %d + %d = %d\n" , a , b , a + b);
        printf("Subtraction     : %d - %d = %d\n" , a , b , a - b);
        printf("Multiplication  : %d * %d = %d\n" , a , b , a * b);

        if (b != 0){
            printf("Division : %d / %d = %d\n", a , b , a / b);
            printf("Modulus  : %d %% %d = %d\n", a , b , a % b);
        } else {
            printf("Division and Modulus not possible(denominator = 0)\n");
        }

        // Mean (Average)
        mean = (a + b)/2.0; // for using float result
        printf("Mean :%.2f\n",mean);

        return 0;

    // Q-5 : Write a program to find simple interest.

        float principal, rate, time, simpleInterest;

        // Input values
        printf("Enter Principal amount: ");
        scanf("%f", &principal);

        printf("Enter Rate of interest: ");
        scanf("%f", &rate);

        printf("Enter Time (in years): ");
        scanf("%f", &time);

        // Calculate Simple Interest
        simpleInterest = (principal * rate * time) / 100;

        // Print result
        printf("\nSimple Interest = %.2f\n", simpleInterest);

        return 0;

}
