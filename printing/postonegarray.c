#include <stdio.h>

int main() 
{
    int a[100] = {55, 9, -20, 2, -6, 5, 75, -8, 11, 9, 31};
    int i, n = 11;

    // Print all elements
    for(i = 0; i < n; i++) {
        printf("%d ", a[i]);
    }
    printf("\n\n");

    // Print positive elements followed by "-", and negative elements as is
    for(i = 0; i < n; i++) {
        if (a[i] < 0) {
            printf("%d +", a[i]);
        } else {
            printf("%d ", a[i]);
        }
    }
    printf("\n");

    return 0;
}
