#include <stdio.h>

// Function to find the indices of two numbers that add up to the target
void findTwoSum(int arr[], int n, int target) {
    int found = 0;
    
    // Check every possible pair in the array
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            if (arr[i] + arr[j] == target) {
                printf("Indices found: %d and %d\n", i, j);
                printf("Values found: %d + %d = %d\n", arr[i], arr[j], target);
                found = 1;
                return; // Exit once the first solution is found
            }
        }
    }
    
    if (!found) {
        printf("No two sum solution found.\n");
    }
}

int main() {
    // Sample test array
    int arr[] = {2, 7, 11, 15};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 9;
    
    printf("Target Sum: %d\n", target);
    findTwoSum(arr, n, target);
    
    return 0;
}
