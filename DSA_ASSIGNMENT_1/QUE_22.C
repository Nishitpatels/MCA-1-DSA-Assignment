#include <stdio.h>

// Function to check if matrix is upper triangular
int isUpperTriangular(int a[20][20], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) { // check only below main diagonal
            if (a[i][j] != 0) {
                return 0; // Not upper triangular
            }
        }
    }
    return 1; // It is upper triangular
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
    if (isUpperTriangular(a, n))
        printf("\nThe matrix is Upper Triangular.\n");
    else
        printf("\nThe matrix is NOT Upper Triangular.\n");

    return 0;
}
