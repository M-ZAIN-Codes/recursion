//4. write a program in c to print Fabonaci series using recursion


#include <stdio.h>

int fibonacci(int n) {
    if (n <= 1)
        return n;
    else
        return fibonacci(n - 1) + fibonacci(n - 2);
}

void printFibonacciSeries(int count) {
    if (count <= 0)
        return;

    printFibonacciSeries(count - 1);

    int fibNumber = fibonacci(count - 1);
    printf("%d ", fibNumber);
}

int main() {
    int n;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series: ");
    printFibonacciSeries(n);

    return 0;
}
