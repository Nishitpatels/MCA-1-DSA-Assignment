#include <stdio.h>

int main() {
    int n;
    printf("Enter size of array: ");
    scanf("%d", &n);

    int arr[n];
    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    int *p = arr;

    // Initialize
    int smallest = *p, secondSmallest = 999999;
    int largest = *p, secondLargest = -999999;

    // Find smallest and largest
    for (int i = 0; i < n; i++) {
        if (*(p + i) < smallest)
            smallest = *(p + i);
        if (*(p + i) > largest)
            largest = *(p + i);
    }

    // Find second smallest and second largest
    for (int i = 0; i < n; i++) {
        if (*(p + i) > smallest && *(p + i) < secondSmallest)
            secondSmallest = *(p + i);
        if (*(p + i) < largest && *(p + i) > secondLargest)
            secondLargest = *(p + i);
    }

    // Interchange values in array
    for (int i = 0; i < n; i++) {
        if (*(p + i) == secondSmallest) {
            *(p + i) = secondLargest;
        } else if (*(p + i) == secondLargest) {
            *(p + i) = secondSmallest;
        }
    }

    // Print result
    printf("\nArray after interchanging second smallest (%d) and second largest (%d):\n", 
            secondSmallest, secondLargest);
    for (int i = 0; i < n; i++) {
        printf("%d ", *(p + i));
    }
    printf("\n");

    return 0;
}
