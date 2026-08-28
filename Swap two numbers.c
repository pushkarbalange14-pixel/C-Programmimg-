/*
==========================================
Problem Name : Swap Two Numbers
Language     : C Programming
Author       : Pushkar Alange
Description  : This program swaps two numbers using a temporary variable.
==========================================
*/

#include <stdio.h>

int main() {
    int a, b, temp;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    temp = a;
    a = b;
    b = temp;

    printf("After swapping:\n");
    printf("First Number = %d\n", a);
    printf("Second Number = %d\n", b);

    return 0;
}
