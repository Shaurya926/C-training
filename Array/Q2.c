// Write a program to find out sum of subarray.
#include <stdio.h>
int subarraySum(int arr[], int n) {
    int totalSum = 0;
    for (int i = 0; i < n; i++) {
        for (int j = i; j < n; j++) {
            int currentSum = 0;
            for (int k = i; k <= j; k++) {
                currentSum += arr[k];
            }
            totalSum += currentSum;
        }
    }
    return totalSum;
}
int main() {
    int arr[] = {1, 2, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    int result = subarraySum(arr, n);
    printf("Sum of all subarrays: %d\n", result);
    return 0;
}