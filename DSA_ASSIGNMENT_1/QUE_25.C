#include <stdio.h>

int main() {
    int p, q;
    int X = 2, Y = 3;

    printf("Enter number of rows: ");
    scanf("%d", &p);
    printf("Enter number of columns: ");
    scanf("%d", &q);

    int A[p][q], B[p][q], Result[p][q];

    // Input Matrix A
    printf("\nEnter elements of Matrix A (%dx%d):\n", p, q);
    for (int i = 0; i < p; i++)
        for (int j = 0; j < q; j++)
            scanf("%d", &A[i][j]);

    // Input Matrix B
    printf("\nEnter elements of Matrix B (%dx%d):\n", p, q);
    for (int i = 0; i < p; i++)
        for (int j = 0; j < q; j++)
            scanf("%d", &B[i][j]);

    // Compute XA + YB
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++) {
            Result[i][j] = X * A[i][j] + Y * B[i][j];
        }
    }

    // Display result
    printf("\nMatrix XA + YB:\n");
    for (int i = 0; i < p; i++) {
        for (int j = 0; j < q; j++)
            printf("%d ", Result[i][j]);
        printf("\n");
    }

    return 0;
}
