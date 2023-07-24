/*1.	Enter a number and find its hailstone sequence using recursion. 
Hailstone sequence is attained by rule the If the current number is even, divide it by two;
 else if it is odd, multiply it by three and add one. Repeat process until you reach 1.*/
#include <stdio.h>

void printHailstoneSequence(int number) {
    printf("%d ", number);

    if (number == 1)
        return;
    else if (number % 2 == 0)
        printHailstoneSequence(number / 2);
    else
        printHailstoneSequence((number * 3) + 1);
}

int main() {
    int number;

    printf("Enter a positive integer: ");
    scanf("%d", &number);

    if (number <= 0) {
        printf("Error: Please enter a positive integer.\n");
    } else {
        printf("Hailstone Sequence: ");
        printHailstoneSequence(number);
        printf("\n");
    }

    return 0;
}
