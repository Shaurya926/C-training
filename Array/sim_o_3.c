#include <stdio.h>
int main()
{
    int a[5] = {-4, -1, 2, -7, 3};
    int sum_a[3];
    for (int i = 0; i < 3; i++)
    {
        sum_a[i] = a[i] + a[i + 1] + a[i + 2];
    }

    for (int i = 0; i < 3; i++)
    {
        printf("%d\n", sum_a[i]);
    }
    int great = sum_a[0];
    for (int i = 1; i < 3; i++)
    {
        if (great < sum_a[i])
            great = sum_a[i];
    }
    printf("%d", great);
    return 0;
}