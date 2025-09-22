#include <stdio.h>

int main() {
    int n1, n2;

    printf("Enter size of first array: ");
    scanf("%d", &n1);
    printf("Enter size of second array: ");
    scanf("%d", &n2);

    float arr1[n1], arr2[n2], merged[n1 + n2];

    // Input first array
    printf("\nEnter %d elements of first array:\n", n1);
    for (int i = 0; i < n1; i++) {
        scanf("%f", &arr1[i]);
        merged[i] = arr1[i];  // copy directly
    }

    // Input second array
    printf("\nEnter %d elements of second array:\n", n2);
    for (int i = 0; i < n2; i++) {
        scanf("%f", &arr2[i]);
        merged[n1 + i] = arr2[i];  // append
    }

    int total = n1 + n2;

    // Display merged array in reverse
    printf("\nMerged array in reverse order:\n");
    for (int i = total - 1; i >= 0; i--) {
        printf("%.2f ", merged[i]);
    }
    printf("\n");

    return 0;
}
