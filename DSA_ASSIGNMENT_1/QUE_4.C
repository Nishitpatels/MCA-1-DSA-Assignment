#include <stdio.h>

// Function to display array
void display(int arr[], int n) {
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// Function to merge two sorted arrays
void mergeSorted(int arr1[], int n1, int arr2[], int n2, int merged[]) {
    int i = 0, j = 0, k = 0;

    while (i < n1 && j < n2) {
        if (arr1[i] < arr2[j])
            merged[k++] = arr1[i++];
        else
            merged[k++] = arr2[j++];
    }

    while (i < n1)  // remaining elements of arr1
        merged[k++] = arr1[i++];

    while (j < n2)  // remaining elements of arr2
        merged[k++] = arr2[j++];
}

// Function to merge two unsorted arrays
void mergeUnsorted(int arr1[], int n1, int arr2[], int n2, int merged[]) {
    int i, j;
    // Copy arr1
    for (i = 0; i < n1; i++)
        merged[i] = arr1[i];
    // Copy arr2
    for (j = 0; j < n2; j++)
        merged[i + j] = arr2[j];
}

// Simple bubble sort for unsorted merge
void bubbleSort(int arr[], int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main() {
    int arr1[50], arr2[50], merged[100];
    int n1, n2, choice;

    printf("Enter size of first array: ");
    scanf("%d", &n1);
    printf("Enter elements of first array:\n");
    for (int i = 0; i < n1; i++)
        scanf("%d", &arr1[i]);

    printf("Enter size of second array: ");
    scanf("%d", &n2);
    printf("Enter elements of second array:\n");
    for (int i = 0; i < n2; i++)
        scanf("%d", &arr2[i]);

    printf("\nChoose option:\n");
    printf("1. Merge when arrays are sorted\n");
    printf("2. Merge when arrays are unsorted\n");
    scanf("%d", &choice);

    if (choice == 1) {
        mergeSorted(arr1, n1, arr2, n2, merged);
        printf("Merged Sorted Array:\n");
        display(merged, n1 + n2);
    } 
    else if (choice == 2) {
        mergeUnsorted(arr1, n1, arr2, n2, merged);
        bubbleSort(merged, n1 + n2);
        printf("Merged & Sorted Array (unsorted input):\n");
        display(merged, n1 + n2);
    } 
    else {
        printf("Invalid choice!\n");
    }

    return 0;
}
