#include <stdio.h>
#include <limits.h>

// Function to find the most efficient multiplication order
int matrixChainOrder(int p[], int n) {
    // m[i][j] stores the minimum number of scalar multiplications needed 
    // to compute the matrix A[i]A[i+1]...A[j] = A[i..j]
    int m[n][n];

    // Cost is zero when multiplying one matrix
    for (int i = 1; i < n; i++) {
        m[i][i] = 0;
    }

    // l is chain length
    for (int l = 2; l < n; l++) {
        for (int i = 1; i < n - l + 1; i++) {
            int j = i + l - 1;
            m[i][j] = INT_MAX;
            
            for (int k = i; k <= j - 1; k++) {
                // q = cost/scalar multiplications
                int q = m[i][k] + m[k + 1][j] + p[i - 1] * p[k] * p[j];
                
                if (q < m[i][j]) {
                    m[i][j] = q;
                }
            }
        }
    }

    return m[1][n - 1];
}

int main() {
    // Array representing dimensions of matrices
    // Matrix A1 has dimensions p[0] x p[1], A2 has p[1] x p[2], etc.
    int arr[] = {10, 20, 30, 40, 30};
    int size = sizeof(arr) / sizeof(arr[0]);

    printf("--- Advanced Dynamic Programming: Matrix Chain Multiplication ---\n");
    printf("Matrix dimensions: \n");
    for(int i = 0; i < size - 1; i++) {
        printf("A%d: %d x %d\n", i + 1, arr[i], arr[i+1]);
    }
    
    int minOperations = matrixChainOrder(arr, size);
    printf("\nMinimum number of multiplications needed: %d\n", minOperations);

    return 0;
}
