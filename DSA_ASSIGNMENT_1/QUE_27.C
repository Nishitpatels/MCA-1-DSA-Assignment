#include <stdio.h>

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    int original = num;

    printf("Digits of %d are: ", original);

    // To store digits in correct order, first count digits
    int digits[10], i = 0;

    while (num > 0) {
        digits[i] = num % 10; // extract last digit
        num = num / 10;       // remove last digit
        i++;
    }

    // Print digits in correct order
    for (int j = i - 1; j >= 0; j--) {
        printf("%d ", digits[j]);
    }
    printf("\n");

    return 0;
}
