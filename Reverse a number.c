/*
==========================================
Problem Name : Reverse a Number
Language     : C Programming
Author       : Pushkar Alange
Description  : This program reverses the digits of a given number.
==========================================
*/

#include <stdio.h>

int main() {
    int num, reverse = 0, rem;

    printf("Enter a number: ");
    scanf("%d", &num);

    while (num != 0) {
        rem = num % 10;
        reverse = reverse * 10 + rem;
        num /= 10;
    }

    printf("Reversed Number = %d\n", reverse);

    return 0;
}
