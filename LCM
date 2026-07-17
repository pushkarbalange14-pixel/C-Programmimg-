/*
==========================================
Problem Name : LCM of Two Numbers
Language     : C Programming
Author       : Pushkar Alange
Description  : This program finds the Least Common Multiple (LCM) of two numbers.
==========================================
*/

#include <stdio.h>

int main() {
    int a, b, max;

    printf("Enter two numbers: ");
    scanf("%d %d", &a, &b);

    max = (a > b) ? a : b;

    while (1) {
        if (max % a == 0 && max % b == 0) {
            printf("LCM = %d\n", max);
            break;
        }
        max++;
    }

    return 0;
}
