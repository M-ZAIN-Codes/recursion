//6. write a program in c to find the GCD of two numbers using recursion

#include <stdio.h>

int gcd(int num1, int num2) {
    if (num2 == 0)
        return num1;
    else
        return gcd(num2, num1 % num2);
}

int main() {
    int num1, num2;

    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    if (num1 <= 0 || num2 <= 0) {
        printf("Error: Please enter positive integers.\n");
    } else {
        int result = gcd(num1, num2);
        printf("The GCD of %d and %d is %d.\n", num1, num2, result);
    }

    return 0;
}
