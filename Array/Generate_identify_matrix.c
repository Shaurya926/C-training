#include <stdio.h>
// Genrerate an identity matrix of a specified size.
int main() {
    int n, i, j;
    printf("Enter the size of the identity matrix: ");
    scanf("%d", &n);

    int identity_matrix[n][n];

    // Initialize the identity matrix
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            if (i == j) {
                identity_matrix[i][j] = 1;
            } else {
                identity_matrix[i][j] = 0;
            }
        }
    }

    // Print the identity matrix
    printf("Identity Matrix of size %d:\n", n);
    for (i = 0; i < n; i++) {
        for (j = 0; j < n; j++) {
            printf("%d ", identity_matrix[i][j]);
        }
        printf("\n");
    }

    return 0;
}