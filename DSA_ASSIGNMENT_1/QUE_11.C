#include <stdio.h>

#define MAX 50

int main() {
    int arr[MAX][MAX], n;
    int *ptr;   // pointer to traverse matrix
    int sum = 0;

    printf("Enter size of square matrix (n): ");
    scanf("%d", &n);

    printf("Enter elements of %d x %d matrix:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    // Pointer points to first element of matrix
    ptr = &arr[0][0];

    // Traverse diagonal elements using pointer arithmetic
    for (int i = 0; i < n; i++) {
        sum += *(ptr + i * n + i);  // accessing arr[i][i] using pointer
    }

    printf("\nSum of main diagonal elements = %d\n", sum);

    return 0;
}
