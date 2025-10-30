#include <stdio.h>

#define SIZE 3 

int main() {
    int arr[SIZE][SIZE];
    int i, j;

    int val = 1;
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            arr[i][j] = val++;
        }
    }
    printf("Z pattern elements:\n");
    for (i = 0; i < SIZE; i++) {
        for (j = 0; j < SIZE; j++) {
            if (i == 0 || i == SIZE - 1 || j == SIZE - i - 1) {
                printf("%d ", arr[i][j]);
            } else {
                printf("  ");
            }
        }
        printf("\n");
    }

    return 0;
}