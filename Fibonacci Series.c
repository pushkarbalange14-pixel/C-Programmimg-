/*
==========================================
Problem Name : Fibonacci Series
Language     : C Programming
Author       : Pushkar Alange
Description  : This program prints the Fibonacci series up to n terms.
==========================================
*/

#include <stdio.h>

int main() {
    int n, i;
    int first = 0, second = 1, next;

    printf("Enter the number of terms: ");
    scanf("%d", &n);

    printf("Fibonacci Series:\n");

    for (i = 1; i <= n; i++) {
        printf("%d ", first);

        next = first + second;
        first = second;
        second = next;
    }

    printf("\n");

    return 0;
}
