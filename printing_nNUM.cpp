//1. Write a program in c to print first n numbers using recursion
#include <stdio.h>

void printNumbers(int n) {
    if (n > 0) {
        printNumbers(n - 1);
        printf("%d ", n);
    }
}

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    printf("The first %d numbers are: ", n);
    printNumbers(n);
    printf("\n");

    return 0;
}
