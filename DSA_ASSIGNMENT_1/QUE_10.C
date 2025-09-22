#include <stdio.h>

#define MAX 50

// Function to read a square matrix
void readMatrix(int arr[MAX][MAX], int n) {
    printf("Enter elements of %d x %d matrix:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &arr[i][j]);
        }
    }
}

// Function to display a square matrix
void displayMatrix(int arr[MAX][MAX], int n) {
    printf("\nThe %d x %d matrix is:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            printf("%d ", arr[i][j]);
        }
        printf("\n");
    }
}

int main() {
    int arr[MAX][MAX];
    int n;

    printf("Enter size of square matrix (n): ");
    scanf("%d", &n);

    readMatrix(arr, n);      // function call to read
    displayMatrix(arr, n);   // function call to display

    return 0;
}
