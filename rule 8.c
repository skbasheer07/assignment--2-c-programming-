#include <stdio.h>

int main() {
    int arr[100], freq[100];
    int n, i, j, count;

    printf("Enter the size of the array: ");
    scanf("%d", &n);

    printf("Enter the elements of the array: ");
    for (i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        freq[i] = -1;  // Initialize the frequency of each element to -1
    }

    for (i = 0; i < n; i++) {
        count = 1;
        for (j = i + 1; j < n; j++) {
            if (arr[i] == arr[j]) {
                count++;
                freq[j] = 0;  // Set the frequency of the matched element to 0
            }
        }
        if (freq[i] != 0) {
            freq[i] = count;  // Set the frequency of the unmatched element
        }
    }

    // Display the frequency of each element
    printf("Frequency of each element: \n");
    for (i = 0; i < n; i++) {
        if (freq[i] != 0) {
            printf("%d occurs %d times\n", arr[i], freq[i]);
        }
    }

    return 0;
}

