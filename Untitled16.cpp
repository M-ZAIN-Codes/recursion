

//1.	Write a program to reverse a number using recursion

#include <stdio.h>

int reverseNumber(int num, int reversedNum) {
    if (num == 0)
        return reversedNum;
    else
        return reverseNumber(num / 10, (reversedNum * 10) + (num % 10));
}

int main() {
    int num;

    printf("Enter a positive integer: ");
    scanf("%d", &num);

    if (num < 0) {
        printf("Error: Please enter a positive integer.\n");
    } else {
        int reversedNumber = reverseNumber(num, 0);
        printf("Reversed number: %d\n", reversedNumber);
    }

    return 0;
}

