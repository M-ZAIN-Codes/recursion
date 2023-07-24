//1.	Write a program in C to calculate the power of any number using recursion.
#include <stdio.h>

double power(double base, int exponent) {
    if (exponent == 0)
        return 1;
    else if (exponent > 0)
        return base * power(base, exponent - 1);
    else
        return (1 / base) * power(base, exponent + 1);
}

int main() {
    double base;
    int exponent;

    printf("Enter the base: ");
    scanf("%lf", &base);

    printf("Enter the exponent: ");
    scanf("%d", &exponent);

    double result = power(base, exponent);
    printf("Result: %.2lf\n", result);

    return 0;
}

