#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() 
{
    int arr[5] = {12, 56, 34, 78, 100};
    int largest = arr[0];
    int i;

    for (i = 1; i < 5; i++) {
        if (arr[i] > largest) {
            largest = arr[i];
        }
    }

    printf("The largest element in the array is %d\n", largest);

	return 0;
}
