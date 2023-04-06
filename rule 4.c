#include <stdio.h>

int main() {
    int array[] = {10, 15, 90, 200, 110}; // the given array
    int n = sizeof(array) / sizeof(int); // calculate the size of the array
    int max_diff = 0;
    int min_element = array[0];

    // loop through the array and update max_diff and min_element
    for (int i = 1; i < n; i++) {
        if (array[i] - min_element > max_diff) {
            max_diff = array[i] - min_element;
        }
        if (array[i] < min_element) {
            min_element = array[i];
        }
    }

    printf("Maximum difference is %d\n", max_diff);

    return 0;
}

