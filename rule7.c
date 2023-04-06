#include <stdio.h>

int main() {
    int arr[100], reverse[100];
    int n, i, j;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Reversing the array
    for (i = n - 1, j = 0; i >= 0; i--, j++) {
        reverse[j] = arr[i];
    }

    // Checking if the reversed array is the same as the original array
    for (i = 0; i < n; i++) {
        if (arr[i] != reverse[i]) {
            printf("The array is not a palindrome.\n");
            return 0;
        }
    }

    printf("The array is a palindrome.\n");

    return 0;
}

