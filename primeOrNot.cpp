//1.	Write a program in C to check a number is a prime number or not using recursion.
#include <stdio.h>

int isPrime(int num, int divisor) {
    if (num <= 1)
        return 0;  // Not prime
    else if (divisor == 1)
        return 1;  // Prime
    else if (num % divisor == 0)
        return 0;  // Not prime
    else
        return isPrime(num, divisor - 1);
}

int main() {
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 1) {
        printf("Error: Please enter a positive integer.\n");
    } else {
        int result = isPrime(num, num / 2);
        if (result)
            printf("%d is a prime number.\n", num);
        else
            printf("%d is not a prime number.\n", num);
    }

    return 0;
}

