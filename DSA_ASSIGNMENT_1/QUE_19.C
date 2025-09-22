#include <stdio.h>

int main() {
    int n;
    printf("Enter order of square matrix (n x n): ");
    scanf("%d", &n);

    int arr[n][n];
    int sum = 0;

    // Input matrix
    printf("Enter elements of %dx%d matrix:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
            if (i == j) {
                sum += arr[i][j];  // add diagonal element
            }
        }
    }

    // Display matrix
    printf("\nMatrix:\n");
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }

    // Display result
    printf("\nSum of diagonal elements = %d\n", sum);

    return 0;
}
