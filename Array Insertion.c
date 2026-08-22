Author : Pushkar Alange
Language : C Programming 
Array Insertion

#include <stdio.h>

int main() {
    int arr[10] = {10, 20, 30, 40, 50};
    int n = 5;
    int pos = 2;      // Index where element is inserted
    int value = 25;

    // Shift elements to the right
    for (int i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the element
    arr[pos] = value;
    n++;

    // Print the updated array
    printf("Array after insertion: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    return 0;
}
