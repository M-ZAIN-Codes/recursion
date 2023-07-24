//5. write program in c to sum the digits of the given number using recursion

#include <stdio.h>

int sumOfDigits(int n) {
    if (n == 0)
        return 0;
    else
        return (n % 10) + sumOfDigits(n / 10);
}

int main() {
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Error: Please enter a positive integer.\n");
    } else {
        int sum = sumOfDigits(num);
        printf("Sum of digits of %d is %d.\n", num, sum);
    }

    return 0;
}

