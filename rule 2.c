#include <stdio.h>
#include <stdlib.h>



int main() {
    int n, i, largest1, largest2;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }
    largest1 = arr[0];
    largest2 = arr[1];
    if(largest2 > largest1) {
        int temp = largest1;
        largest1 = largest2;
        largest2 = temp;
    }
    for(i = 2; i < n; i++) {
        if(arr[i] > largest1) {
            largest2 = largest1;
            largest1 = arr[i];
        }
        else if(arr[i] > largest2 && arr[i] != largest1) {
            largest2 = arr[i];
        }
    }
    printf("The largest element in the array is %d\n", largest1);
    printf("The second largest element in the array is %d\n", largest2);
    
return 0;
}

    
