#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */


	int main() {
    int arr[] = {1, 2, 3, 4, 4, 5, 5, 6, 6, 7, 8, 8, 9, 9, 9}; // the given array
    int n = sizeof(arr) / sizeof(int); // calculate the size of the array
    int i, j, k;

    // loop through the array to find duplicate elements
    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n;) {
            if (arr[j] == arr[i]) {
                // shift the elements to the left to remove the duplicate
                for (k = j; k < n; k++) {
                    arr[k] = arr[k+1];
                }
                n--; // reduce the size of the array
            }
            else {
                j++; // move to the next element
            }
        }
    }

    // print the updated array without duplicate elements
    printf("The updated array without duplicate elements: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }


	return 0;
}
