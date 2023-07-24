//2. Write a program in c to calculate the  sum of numbers from 1 to n using recursion

#include <stdio.h>

int calculate_Sum(int n) {
    if (n == 0)
        return 0;
    else
        return n + calculate_Sum(n - 1);
}

int main() {
    int n;

    printf("Enter the value of n: ");
    scanf("%d", &n);

    int sum = calculate_Sum(n);

    printf("The sum of numbers from 1 to %d is %d.\n", n, sum);

    return 0;
}

