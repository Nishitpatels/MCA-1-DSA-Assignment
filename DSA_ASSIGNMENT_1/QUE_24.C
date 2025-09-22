#include <stdio.h>

// Function to check if matrix is symmetric
int isSymmetric(int a[20][20], int n) {
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            if (a[i][j] != a[j][i]) {
                return 0; // Not symmetric
            }
        }
    }
    return 1; // Symmetric
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
    if (isSymmetric(a, n))
        printf("\nThe matrix is Symmetric.\n");
    else
        printf("\nThe matrix is NOT Symmetric.\n");

    return 0;
}
