# Simple Calculator

## Description
This is a simple C program that performs basic mathematical operations including addition, subtraction, multiplication, division, and factorial calculation. The program allows users to select an operation and input numbers to perform the chosen calculation. It also includes error handling for division by zero and invalid inputs for factorial calculation.

## Features
- **Addition:** Add two numbers.
- **Subtraction:** Subtract one number from another.
- **Multiplication:** Multiply two numbers.
- **Division:** Divide one number by another with error handling for division by zero.
- **Factorial:** Calculate the factorial of a non-negative integer.

## Usage
1. Compile the program using a C compiler, such as `gcc`:
   ```
   gcc -o calculator calculator.c
   
   ```

2. Run the program:
   ```
   ./math_operations
   
   ```

3. Follow the on-screen instructions to select an operation and input the required values.

## Menu Options
- **1:** Perform addition.
- **2:** Perform subtraction.
- **3:** Perform multiplication.
- **4:** Perform division.
- **5:** Calculate the factorial of a number.
- **6:** Exit the program.

## Example Output
```
Select an operation:
1. Addition
2. Subtraction
3. Multiplication
4. Division
5. Factorial
6. Exit
Enter your choice: 1
Enter two numbers: 5 10
Result: 15.00
```

## Notes
- Factorial is only defined for non-negative integers. Inputting a negative integer will result in an error message.
- Division by zero is not allowed, and the program will display an appropriate error message if attempted.

## License
This project is open-source and available under the MIT License.

