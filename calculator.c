#include <stdio.h>

// Function declarations
double add(double a, double b);
double subtract(double a, double b);
double multiply(double a, double b);
double divide(double a, double b);
unsigned long long factorial(int n);

int main() {
    int choice;
    double num1, num2;
    int n;

    do {
        printf("\nSelect an operation:\n");
        printf("1. Addition\n");
        printf("2. Subtraction\n");
        printf("3. Multiplication\n");
        printf("4. Division\n");
        printf("5. Factorial\n");
        printf("6. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        if (choice == 1) {
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            printf("Result: %.2lf\n", add(num1, num2));
        } else if (choice == 2) {
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            printf("Result: %.2lf\n", subtract(num1, num2));
        } else if (choice == 3) {
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            printf("Result: %.2lf\n", multiply(num1, num2));
        } else if (choice == 4) {
            printf("Enter two numbers: ");
            scanf("%lf %lf", &num1, &num2);
            if (num2 != 0)
                printf("Result: %.2lf\n", divide(num1, num2));
            else
                printf("Error: Division by zero is not allowed.\n");
        } else if (choice == 5) {
            printf("Enter a non-negative integer: ");
            scanf("%d", &n);
            if (n >= 0)
                printf("Result: %llu\n", factorial(n));
            else
                printf("Error: Factorial of a negative number is not defined.\n");
        } else if (choice == 6) {
            printf("Exiting the program. Goodbye!\n");
        } else {
            printf("Invalid choice. Please try again.\n");
        }
    } while (choice != 6);

    return 0;
}

// Function definitions
double add(double a, double b) {
    return a + b;
}

double subtract(double a, double b) {
    return a - b;
}

double multiply(double a, double b) {
    return a * b;
}

double divide(double a, double b) {
    return a / b;
}

unsigned long long factorial(int n) {
    unsigned long long result = 1;
    for (int i = 1; i <= n; i++) {
        result *= i;
    }
    return result;
}
