#include <stdio.h>

int binarySearch(int arr[], int n, int key, int *comparisons) {
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = (low + high) / 2;
        (*comparisons)++;              // count each comparison

        if (arr[mid] == key)
            return mid;                // found
        else if (arr[mid] < key)
            low = mid + 1;             // search in right half
        else
            high = mid - 1;            // search in left half
    }
    return -1;                         // not found
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};  // sorted array
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 30;
    int comparisons = 0;

    int result = binarySearch(arr, n, key, &comparisons);

    if (result != -1)
        printf("Binary Search: %d found at index %d\n", key, result);
    else
        printf("Binary Search: %d not found\n", key);

    printf("Number of comparisons (Binary Search): %d\n", comparisons);

    return 0;
}
