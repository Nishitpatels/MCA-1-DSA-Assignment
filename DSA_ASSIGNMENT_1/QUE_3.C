#include <stdio.h>

#define MAX 100   // maximum array size

// Function to display the array
void display(int arr[], int n) {
    if (n == 0) {
        printf("Array is empty!\n");
        return;
    }
    printf("Array elements: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

int main() {
    int arr[MAX], n, choice, pos, value;

    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    while (1) {
        printf("\n--- Menu ---\n");
        printf("1. Insert at Start\n");
        printf("2. Insert at End\n");
        printf("3. Insert at Middle (position)\n");
        printf("4. Delete from Start\n");
        printf("5. Delete from End\n");
        printf("6. Delete from Middle (position)\n");
        printf("7. Display Array\n");
        printf("8. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);

        switch (choice) {
            case 1: // Insert at Start
                printf("Enter value to insert: ");
                scanf("%d", &value);
                for (int i = n; i > 0; i--) {
                    arr[i] = arr[i - 1];
                }
                arr[0] = value;
                n++;
                break;

            case 2: // Insert at End
                printf("Enter value to insert: ");
                scanf("%d", &value);
                arr[n] = value;
                n++;
                break;

            case 3: // Insert at Middle (given position)
                printf("Enter position (0 to %d): ", n);
                scanf("%d", &pos);
                if (pos < 0 || pos > n) {
                    printf("Invalid position!\n");
                } else {
                    printf("Enter value to insert: ");
                    scanf("%d", &value);
                    for (int i = n; i > pos; i--) {
                        arr[i] = arr[i - 1];
                    }
                    arr[pos] = value;
                    n++;
                }
                break;

            case 4: // Delete from Start
                if (n == 0) {
                    printf("Array is empty!\n");
                } else {
                    for (int i = 0; i < n - 1; i++) {
                        arr[i] = arr[i + 1];
                    }
                    n--;
                }
                break;

            case 5: // Delete from End
                if (n == 0) {
                    printf("Array is empty!\n");
                } else {
                    n--;
                }
                break;

            case 6: // Delete from Middle
                printf("Enter position (0 to %d): ", n - 1);
                scanf("%d", &pos);
                if (pos < 0 || pos >= n) {
                    printf("Invalid position!\n");
                } else {
                    for (int i = pos; i < n - 1; i++) {
                        arr[i] = arr[i + 1];
                    }
                    n--;
                }
                break;

            case 7:
                display(arr, n);
                break;

            case 8:
                return 0;

            default:
                printf("Invalid choice!\n");
        }
    }
}
