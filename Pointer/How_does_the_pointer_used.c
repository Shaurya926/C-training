#include <stdio.h>

// This function takes a pointer to an integer and updates the value at that address.

void updateValue(int *ptr) {
    *ptr = 20; // Update the value at the address pointed to by ptr
}
int main() {
    int num = 70;
    printf("Before update: %d\n", num);
    
    updateValue(&num); // Pass the address of num to the function
    
    printf("After update: %d\n", num);
    return 0;
}