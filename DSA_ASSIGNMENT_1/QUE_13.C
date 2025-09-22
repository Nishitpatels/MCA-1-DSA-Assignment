#include <stdio.h>

int main() {
    int n;
    printf("Enter the order of square matrix: ");
    scanf("%d", &n);

    int A[n][n];

    printf("Enter the elements of the %dx%d matrix:\n", n, n);
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    long long product = 1;
    int found = 0;  // To check if there are elements above diagonal

    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            product *= A[i][j];
            found = 1;
        }
    }

    if (found)
        printf("\nProduct of elements above main diagonal = %lld\n", product);
    else
        printf("\nNo elements above main diagonal!\n");

    return 0;
}
