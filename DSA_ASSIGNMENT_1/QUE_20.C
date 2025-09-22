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
            if (j > i) {   // element above main diagonal
                sum += arr[i][j];
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
    printf("\nSum of elements above main diagonal = %d\n", sum);

    return 0;
}
