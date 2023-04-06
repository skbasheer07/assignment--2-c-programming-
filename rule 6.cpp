#include <stdio.h>

int main() {
    int arr[] = {1, 2, 3, 4, 5, 6, 7, 8, 9}; // the given array
    int n = sizeof(arr) / sizeof(int); // calculate the size of the array
    int even[n], odd[n];
    int i, j = 0, k = 0;

    // loop through the array to separate even and odd elements
    for (i = 0; i < n; i++) {
        if (arr[i] % 2 == 0) {
            even[j] = arr[i];
            j++;
        }
        else {
            odd[k] = arr[i];
            k++;
        }
    }

    // print the even array
    printf("Even array: ");
    for (i = 0; i < j; i++) {
        printf("%d ", even[i]);
    }

    // print the odd array
    printf("\nOdd array: ");
    for (i = 0; i < k; i++) {
        printf("%d ", odd[i]);
    }

    return 0;
}

