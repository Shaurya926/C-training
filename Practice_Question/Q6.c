// Create 2D array dynamically and perform operations
#include <stdio.h>
#include <stdlib.h>
int main(){
    int rows, cols, i, j, sum = 0;
    printf("Enter number of rows and columns: ");
    scanf("%d %d", &rows, &cols);

    // Dynamically allocate memory for 2D array
    int **array = (int **)malloc(rows * sizeof(int *));
    for(i = 0; i < rows; i++){
        array[i] = (int *)malloc(cols * sizeof(int));
    }

    // Input elements
    printf("Enter elements of the array:\n");
    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            scanf("%d", &array[i][j]);
        }
    }

    // Calculate sum of elements
    for(i = 0; i < rows; i++){
        for(j = 0; j < cols; j++){
            sum += array[i][j];
        }
    }

    printf("Sum of all elements: %d\n", sum);

    // Free allocated memory
    for(i = 0; i < rows; i++){
        free(array[i]);
    }
    free(array);

    return 0;
}