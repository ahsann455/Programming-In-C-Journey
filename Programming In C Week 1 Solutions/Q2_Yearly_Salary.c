#include <stdio.h>

#define TAX_RATE 0.1
#define MONTHS 12

int main() {
    float basicSalary, yearlySalary;
    printf("Enter basic salary: ");
    scanf("%f", &basicSalary);
    yearlySalary = basicSalary * MONTHS * (1 - TAX_RATE);
    printf("Yearly Salary after tax: %.2f\n", yearlySalary);
    return 0;
}