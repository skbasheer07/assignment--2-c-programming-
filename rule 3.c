#include <stdio.h>

int main()
{
    int n, i, j, temp;
    float sum = 0, avg;
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter the elements of the array: ");
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    for(i = 0; i < n; i++)
    {
        for(j = i + 1; j < n; j++)
        {
            if(arr[i] < arr[j])
            {
                temp = arr[i];
                arr[i] = arr[j];
                arr[j] = temp;
            }
        }
    }
    printf("Array in descending order: ");
    for(i = 0; i < n; i++)
    {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Second largest element = %d\n", arr[1]);
    printf("Second smallest element = %d\n", arr[n-2]);
    sum = arr[1] + arr[n-2];
    avg = sum / 2.0;
    printf("Average of second largest and second smallest elements = %.2f\n", avg);
    for(i = 0; i < n; i++)
    {
        if(arr[i] == avg)
        {
            printf("The average %.2f is present in the array.\n", avg);
            break;
        }
    }
    if(i == n)
    {
        printf("The average %.2f is not present in the array.\n", avg);
    }
    return 0;
	}
