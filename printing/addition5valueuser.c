#include<stdio.h>

void sub(int x, int y, int z, int f, int d){
    printf("\nThe sum of the given numbers is %d", x + y + z + f + d);
}

int main() {
    int x, y, z, f, d;
    printf("\nEnter number 1: ");
    scanf("%d", &x);
    printf("\nEnter number 2: ");
    scanf("%d", &y);
    printf("\nEnter number 3: ");
    scanf("%d", &z);
    printf("\nEnter number 4: ");
    scanf("%d", &f);
    printf("\nEnter number 5: ");
    scanf("%d", &d);

    sub(x, y, z, f, d);

    return 0;
}
