// Write a program to perform linear search and binary search and report the number of comparisons in both the cases.

#include <stdio.h>

int linearSearch(int arr[], int n, int key, int *comparisons) {
    for (int i = 0; i < n; i++) {
        (*comparisons)++;              // count each comparison
        if (arr[i] == key) {
            return i;                  // found at index i
        }
    }
    return -1;                         // not found
}

int main() {
    int arr[] = {10, 20, 30, 40, 50};
    int n = sizeof(arr) / sizeof(arr[0]);
    int key = 30;
    int comparisons = 0;

    int result = linearSearch(arr, n, key, &comparisons);

    if (result != -1)
        printf("Linear Search: %d found at index %d\n", key, result);
    else
        printf("Linear Search: %d not found\n", key);

    printf("Number of comparisons (Linear Search): %d\n", comparisons);

    return 0;
}
