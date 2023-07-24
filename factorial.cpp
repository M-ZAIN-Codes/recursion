//3.write a program to find the factorial of a number

#include <stdio.h>

int factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int n;

    printf("Enter a positive integer: ");
    scanf("%d", &n);

    if (n < 0) {
        printf("Error: invalid number.\n");
    } else {
        int result = factorial(n);
        printf("The factorial of %d is %d.\n", n, result);
    }

    return 0;
}


