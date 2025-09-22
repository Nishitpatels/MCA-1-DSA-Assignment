#include <stdio.h>

int main() {
    int rows, cols;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int arr[rows][cols];

    // Input elements
    printf("Enter elements of %dx%d matrix:\n", rows, cols);
    for (int i = 0; i < rows; i++)
        for (int j = 0; j < cols; j++)
            scanf("%d", &arr[i][j]);

    // Pointer to 2D array
    int (*ptr)[cols] = arr;

    // Display elements using pointer
    printf("\nMatrix elements using pointer:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            printf("%d ", ptr[i][j]);
        }
        printf("\n");
    }

    // Example: Access a specific element
    printf("\nElement at [1][1] using pointer = %d\n", ptr[1][1]);

    return 0;
}
