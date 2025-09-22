#include <stdio.h>

int main() {
    int rows, cols;
    int arr[50][50];   // max 50x50
    int sum = 0;
    float mean;

    // Input rows and columns
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    // Input elements
    printf("Enter elements of the array:\n");
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
            sum += arr[i][j];  // accumulate sum
        }
    }

    // Calculate mean
    mean = (float)sum / (rows * cols);

    // Output
    printf("\nSum of all elements = %d\n", sum);
    printf("Mean of all elements = %.2f\n", mean);

    return 0;
}
