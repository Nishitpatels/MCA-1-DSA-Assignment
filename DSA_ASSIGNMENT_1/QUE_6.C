#include <stdio.h>

#define SIZE 100

int main() {
    int arr[SIZE];
    int i, j;

    // Input array
    printf("Enter %d integers:\n", SIZE);
    for (i = 0; i < SIZE; i++) {
        scanf("%d", &arr[i]);
    }

    printf("\nPairs with sum 50:\n");
    int found = 0;
    for (i = 0; i < SIZE; i++) {
        for (j = i + 1; j < SIZE; j++) {   // avoid duplicate pairs
            if (arr[i] + arr[j] == 50) {
                printf("(%d, %d)\n", arr[i], arr[j]);
                found = 1;
            }
        }
    }

    if (!found)
        printf("No pairs found!\n");

    return 0;
}
