//1.	Write a program in C to find the LCM of two numbers using recursion.
#include <stdio.h>

int gcd(int num1, int num2) {
    if (num2 == 0)
        return num1;
    else
        return gcd(num2, num1 % num2);
}

int lcm(int num1, int num2) {
    int gcdResult = gcd(num1, num2);
    return (num1 * num2) / gcdResult;
}

int main() {
    int num1, num2;

    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 <= 0 || num2 <= 0) {
        printf("Error: Please enter positive integers.\n");
    } else {
        int result = lcm(num1, num2);
        printf("The LCM of %d and %d is %d.\n", num1, num2, result);
    }

    return 0;
}

