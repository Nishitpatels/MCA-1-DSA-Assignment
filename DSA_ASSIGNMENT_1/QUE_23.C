#include <stdio.h>

// Function to check if matrix is lower triangular
int isLowerTriangular(int a[20][20], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) { // check only above main diagonal
            if (a[i][j] != 0) {
                return 0; // Not lower triangular
            }
        }
    }
    return 1; // It is lower triangular
}

int main() {
    int n, a[20][20];
    printf("Enter order of square matrix (n x n): ");
    scanf("%d", &n);

    printf("Enter elements of %dx%d matrix:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &a[i][j]);
        }
    }

    // Display matrix
    printf("\nMatrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", a[i][j]);
        }
        printf("\n");
    }

    // Check
    if (isLowerTriangular(a, n))
        printf("\nThe matrix is Lower Triangular.\n");
    else
        printf("\nThe matrix is NOT Lower Triangular.\n");

    return 0;
}
