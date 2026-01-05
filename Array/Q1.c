// Write a program to maximize the sum of an array using target.
#include <stdio.h>
int maximizeSum(int arr[], int n, int target) {
    int sum = 0;
    for (int i = 0; i < n; i++) {
        if (arr[i] < target) {
            sum += target;
        } else {
            sum += arr[i];
        }
    }
    return sum;
}
int main() {
    int arr[] = {1, 2, 3, 4, 5};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 3;
    int result = maximizeSum(arr, n, target);
    printf("Maximized Sum: %d\n", result);
    return 0;
}