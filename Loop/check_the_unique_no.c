#include <stdio.h>

int isUnique(int num) {
    int visited[10] = {0};  // to track digits (0-9)

    while (num > 0) {
        int digit = num % 10;

        if (visited[digit] == 1) {
            return 0; // not unique
        }

        visited[digit] = 1;
        num = num / 10;
    }

    return 1; // all digits unique
}

int main() {
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);

    if (isUnique(num))
        printf("Number has unique digits\n");
    else
        printf("Number does NOT have unique digits\n");

    return 0;
}