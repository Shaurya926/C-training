// Insert an element at a given postion in an array.
#include <stdio.h>
int main() {
    int arr[100], n, pos, element, i;

    // Input the number of elements in the array
    printf("Enter the number of elements in the array: ");
    scanf("%d", &n);

    // Input the elements of the array
    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    // Input the position and element to be inserted
    printf("Enter the position to insert the element (0 to %d): ", n);
    scanf("%d", &pos);
    printf("Enter the element to be inserted: ");
    scanf("%d", &element);

    // Check if the position is valid
    if(pos < 0 || pos > n) {
        printf("Invalid position!\n");
        return 1;
    }

    // Shift elements to the right to make space for the new element
    for(i = n; i > pos; i--) {
        arr[i] = arr[i - 1];
    }

    // Insert the new element at the specified position
    arr[pos] = element;
    n++; // Increase the size of the array

    // Print the updated array
    printf("Array after insertion:\n");
    for(i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}