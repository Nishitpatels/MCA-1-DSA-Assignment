#include <stdio.h>

int main() {
    int A[3][3], B[3][3], C[3][3];
    int *pA, *pB, *pC;

    printf("Enter elements of first 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Enter elements of second 3x3 matrix:\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            scanf("%d", &B[i][j]);
        }
    }

    // Initialize pointers
    pA = &A[0][0];
    pB = &B[0][0];
    pC = &C[0][0];

    // Add matrices using pointers
    for (int i = 0; i < 9; i++) {
        *(pC + i) = *(pA + i) + *(pB + i);
    }

    // Display result matrix
    printf("\nResultant Matrix (A + B):\n");
    for (int i = 0; i < 3; i++) {
        for (int j = 0; j < 3; j++) {
            printf("%d\t", C[i][j]);
        }
        printf("\n");
    }

    return 0;
}
