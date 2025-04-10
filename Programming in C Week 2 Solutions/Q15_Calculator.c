#include <stdio.h>

int main() {
    float a, b, result;
    char op;
    printf("Enter two numbers and an operator (+, -, *, /): ");
    scanf("%f %f %c", &a, &b, &op);
    if(op == '+')
        result = a + b;
    else if(op == '-')
        result = a - b;
    else if(op == '*')
        result = a * b;
    else if(op == '/')
        result = a / b;
    else {
        printf("Invalid operator\n");
        return 1;
    }
    printf("Result: %.2f\n", result);
    return 0;
}