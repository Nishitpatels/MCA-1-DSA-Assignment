#include <stdio.h>

int main() {
    int p, q, r, choice;

    // Read dimensions
    printf("Enter dimensions (p q r): ");
    scanf("%d %d %d", &p, &q, &r);

    int A[p][q], B[q][r], Sum[p][q], Trans[q][p], Product[p][r];

    // Input Matrix A
    printf("\nEnter elements of Matrix A (%dx%d):\n", p, q);
    for (int i = 0; i < p; i++)
        for (int j = 0; j < q; j++)
            scanf("%d", &A[i][j]);

    // Input Matrix B
    printf("\nEnter elements of Matrix B (%dx%d):\n", q, r);
    for (int i = 0; i < q; i++)
        for (int j = 0; j < r; j++)
            scanf("%d", &B[i][j]);

    do {
        printf("\n---- MENU ----\n");
        printf("1. Display Matrices\n");
        printf("2. Sum of A and B (only if p=q and q=r)\n");
        printf("3. Transpose of A\n");
        printf("4. Product of A and B\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: // Display matrices
                printf("\nMatrix A:\n");
                for (int i = 0; i < p; i++) {
                    for (int j = 0; j < q; j++)
                        printf("%d ", A[i][j]);
                    printf("\n");
                }

                printf("\nMatrix B:\n");
                for (int i = 0; i < q; i++) {
                    for (int j = 0; j < r; j++)
                        printf("%d ", B[i][j]);
                    printf("\n");
                }
                break;

            case 2: // Sum (only possible if same order)
                if (p == q && q == r) {
                    printf("\nSum of A and B:\n");
                    for (int i = 0; i < p; i++) {
                        for (int j = 0; j < q; j++) {
                            Sum[i][j] = A[i][j] + B[i][j];
                            printf("%d ", Sum[i][j]);
                        }
                        printf("\n");
                    }
                } else {
                    printf("\nSum not possible (different dimensions)\n");
                }
                break;

            case 3: // Transpose of A
                printf("\nTranspose of A:\n");
                for (int i = 0; i < q; i++) {
                    for (int j = 0; j < p; j++) {
                        Trans[i][j] = A[j][i];
                        printf("%d ", Trans[i][j]);
                    }
                    printf("\n");
                }
                break;

            case 4: // Product A × B
                printf("\nProduct of A and B:\n");
                for (int i = 0; i < p; i++) {
                    for (int j = 0; j < r; j++) {
                        Product[i][j] = 0;
                        for (int k = 0; k < q; k++)
                            Product[i][j] += A[i][k] * B[k][j];
                        printf("%d ", Product[i][j]);
                    }
                    printf("\n");
                }
                break;

            case 5:
                printf("Exiting program.\n");
                break;

            default:
                printf("Invalid choice!\n");
        }
    } while (choice != 5);

    return 0;
}
