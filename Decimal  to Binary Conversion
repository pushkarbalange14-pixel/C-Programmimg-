/*
==========================================
Problem Name : Decimal to Binary Conversion
Language     : C Programming
Author       : Pushkar Alange
Description  : This program converts a decimal number into binary.
==========================================
*/

#include <stdio.h>

int main() {
    int num, binary[32], i = 0, j;

    printf("Enter a decimal number: ");
    scanf("%d", &num);

    while (num > 0) {
        binary[i] = num % 2;
        num /= 2;
        i++;
    }

    printf("Binary = ");

    for (j = i - 1; j >= 0; j--)
        printf("%d", binary[j]);

    printf("\n");

    return 0;
}
