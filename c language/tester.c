#include <stdio.h>

int main() {
    int a, b;
    int original_a, original_b;
    
    printf("Enter two numbers:\n");
    printf("Enter first number (a): ");
    scanf("%d", &a);
    printf("Enter second number (b): ");
    scanf("%d", &b);
    
    // Store original values
    original_a = a;
    original_b = b;
    
    // Arithmetic Operators
    printf("\n--- Arithmetic Operators ---\n");
    printf("Given numbers: a = %d, b = %d\n", a, b);
    printf("Addition (a + b): %d\n", a + b);
    printf("Subtraction (a - b): %d\n", a - b);
    printf("Multiplication (a * b): %d\n", a * b);
    printf("Division (a / b): %d\n", a / b);
    printf("Modulus (a %% b): %d\n", a % b);
    printf("Increment (a++): %d\n", a++);
    printf("Decrement (b--): %d\n", b--);
    
    // Reset to original values
    a = original_a;
    b = original_b;
    
    // Relational Operators
    printf("\n--- Relational Operators ---\n");
    printf("Given numbers: a = %d, b = %d\n", a, b);
    printf("Equal to (a == b): %d\n", a == b);
    printf("Not equal to (a != b): %d\n", a != b);
    printf("Greater than (a > b): %d\n", a > b);
    printf("Less than (a < b): %d\n", a < b);
    printf("Greater than or equal to (a >= b): %d\n", a >= b);
    printf("Less than or equal to (a <= b): %d\n", a <= b);
    
    // Logical Operators
    printf("\n--- Logical Operators ---\n");
    printf("Given expressions: (a > b) and (a != 0)\n");
    printf("Logical AND (a > b && a != 0): %d\n", a > b && a != 0);
    printf("Logical OR (a > b || a != 0): %d\n", a > b || a != 0);
    printf("Logical NOT (!a): %d\n", !a);
    
    // Bitwise Operators
    printf("\n--- Bitwise Operators ---\n");
    printf("Given numbers: a = %d, b = %d\n", a, b);
    printf("Bitwise AND (a & b): %d\n", a & b);
    printf("Bitwise OR (a | b): %d\n", a | b);
    printf("Bitwise XOR (a ^ b): %d\n", a ^ b);
    printf("Bitwise NOT (~a): %d\n", ~a);
    printf("Left Shift (a << 1): %d\n", a << 1);
    printf("Right Shift (a >> 1): %d\n", a >> 1);
    
    return 0;
}
