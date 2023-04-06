#include <stdio.h>
int main()
{

int min_jumps(int arr[], int n) {
    if (n <= 1)
        return 0;
    
    int maxReachable = arr[0];
    int steps = 1;
    int currentEnd = arr[0];
    
    for (int i = 1; i < n; i++)
	 {
        if (i > currentEnd)
            return -1;
        if (i > maxReachable)
            maxReachable = i + arr[i];
        if (i == currentEnd) {
            currentEnd = maxReachable;
            steps++;
        }
    }
    
    return steps;
}

int main() {
    int arr[] = {1, 3, 5, 8, 9, 2, 6, 7, 6, 8, 9};
    int n = sizeof(arr) / sizeof(arr[0]);
    
    int minJumps = min_jumps(arr, n);
    
    if (minJumps == -1)
        printf("End is not reachable.");
    else
        printf("Minimum number of jumps: %d", minJumps);
    
    return 0;
}

