#include <stdio.h>

int main() {
    int arr[100], n, temp;

    // Input array size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Interchange second and second last elements
    if (n >= 2) {
        temp = arr[1];
        arr[1] = arr[n - 2];
        arr[n - 2] = temp;
    }

    // Display updated array
    printf("\nArray after interchange:\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}
