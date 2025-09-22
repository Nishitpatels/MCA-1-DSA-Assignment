#include <stdio.h>

int main() {
    int n, i, pos;

    printf("Enter number of elements in array: ");
    scanf("%d", &n);

    int arr[n];  // array declaration

    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the position (index) of element to find its address: ");
    scanf("%d", &pos);

    if (pos >= 0 && pos < n) {
        printf("Element at index %d = %d\n", pos, arr[pos]);
        printf("Address of arr[%d] = %p\n", pos, (void*)&arr[pos]);
    } else {
        printf("Invalid index! Valid range is 0 to %d\n", n - 1);
    }

    return 0;
}
