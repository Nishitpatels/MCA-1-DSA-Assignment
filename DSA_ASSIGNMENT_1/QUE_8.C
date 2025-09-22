#include <stdio.h>

int main() {
    int arr[100], n;
    long long sum = 0; // use long long for large values

    // Input array size
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Input elements
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Calculate sum of squares
    for (int i = 0; i < n; i++) {
        sum += (long long)arr[i] * arr[i];
    }

    // Display result
    printf("\nSum of squares of elements = %lld\n", sum);

    return 0;
}
