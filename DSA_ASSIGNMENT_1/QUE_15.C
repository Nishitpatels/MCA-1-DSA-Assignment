#include <stdio.h>

int main() {
    int rows, cols;
    printf("Enter number of rows: ");
    scanf("%d", &rows);
    printf("Enter number of columns: ");
    scanf("%d", &cols);

    int arr[rows][cols];

    // Input elements
    printf("Enter the elements of the %dx%d matrix:\n", rows, cols);
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            scanf("%d", &arr[i][j]);
        }
    }

    int even[rows * cols], odd[rows * cols];
    int eCount = 0, oCount = 0;

    // Separate odd and even
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            if (arr[i][j] % 2 == 0)
                even[eCount++] = arr[i][j];
            else
                odd[oCount++] = arr[i][j];
        }
    }

    // Display results
    printf("\nEven elements: ");
    if (eCount == 0)
        printf("None");
    else {
        for (int i = 0; i < eCount; i++)
            printf("%d ", even[i]);
    }

    printf("\nOdd elements: ");
    if (oCount == 0)
        printf("None");
    else {
        for (int i = 0; i < oCount; i++)
            printf("%d ", odd[i]);
    }

    printf("\n");
    return 0;
}
